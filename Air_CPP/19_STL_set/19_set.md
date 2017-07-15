19.STL Set
==
容器类：
    std::set std::multiset  用于存储一组经过排序的元素，其查找元素的复杂度为对数，而unordered集合的插入和查找时间是固定的。

- 使用`STL set、multiset、unordered_set、unordered_multiset`
- 插入、删除、查找容器
- 使用STL 容器...的优缺点

19.1简介
--
容器set和multiset让程序员能够在容器中快速查找值，键是存储在一维容器中的值。
set和multiset之间的**区别**在于： 
    后者可以存储重复的值，前者只能存储唯一的值。

```
      --------              --------
     /"Jack"   \           /"Jack"   \
    |   "steve" |         |   "steve" |
    |"Amanda"   |         | Amanda"   |
    |  "Jill"   |         |  "Jill"   |
     \_________/           \___"Jack"/
```
为实现快速搜索，STL set和multiset的内部结构像**二叉树**，意味着将元素插入到set或multiset时将对其进行排序，以提高查找速度。
这还意味着不像vector那样可以使用其他元素替换给定位置的元素，位于set中特定位置的元素不能替换为值不同的新元素，这是因为set将把新元素同二叉树中其他元素进行比较，从而将其放在其他位置。
#include <set>

19.2  set和multiset的基本操作
--
19.2.1 实例化
    针对类型具体化
        类型 对象 迭代器 谓词
19.2.2 插入元素 insert
19.2.3 查找元素 find
19.2.4 删除元素 erase

19.3 使用STL set和multiset的优缺点
--
    查找快（容器在插入元素时进行排序）若经常find则值得
    find利用内部二叉树结构。有序的二叉树使set和multiset于vextor相比有缺点：
    在vector中，可以用新值替换迭代器返回的元素;
    在set中，根据元素的值对其进行了排序，因此不能通过迭代器覆盖元素值
    std::unordered_set + std::unordered_multiset 散列集合
    std::set和std::multiset使用std::less<T>或提供的谓词对元素（同时也是键进行排序）。相对于vector等未排序的容器，在经过排序的容器中查找的速度更快，其sort的复杂度为对数。
    意味着在set中查找元素时，所需的时间不是与元素数成正比，而是与元素的对数成正比。
    相比于未经排序的容器，极大改善了性能。
    使用散列函数计算排序索引，计算唯一索引，再根据索引决定放到哪个桶。
    std::unordered_set基于散列的set;
```
    #include <unordered_set>
    // instantiation:
    unordered_set<int> usetInt;
    // insertion of an element
    usetInt.insert(1000);
    // find():
    auto iPairThousand = usetInt.find(1000);
    
    if (iPairThousand != useInt.end())
        cout << *iPairThousand << endl;
```
   + 
   `unordered_set<int>::hasher HFn = useInt.hash_function();`
    程序19.6
        insert() find() size() max_bucket_count() load_factor() nax_load_factor()

