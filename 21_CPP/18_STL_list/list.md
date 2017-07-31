18 STL `list` + `forward_list`
==

STL(标准模板库)以模板类std::list的方式向程序员提供了一个双向链表。
优点：插入删除速度快、时间固定
    C++11 单向链表forward_list,沿一个方向遍历

- 实例化`list`和`forward_list`
- 使用STL链表库，插入和删除元素
- 对元素进行反转和排序

18.1 std::list特点
--
链表 一系列节点 包含对象/值+指向下一个节点
                            链接到下一个和前一个节点

             __________________       __________________
<-----------|front| data | next| --->|front| data | next|----------->
            |_____|______|_____| <-- |_____|______|_____|
      ----- |_________N________|     |________N+1_______|-----
    
    std::list  
    #include <list>
18.2 基本的list操作
--
18.2.1 实例化
    程序18.1
18.2.2 两端插入
    程序18.2
18.2.3 中间插入
    insert 
    {
        1. iterator insert (iterator pos, const T& x) 
           返回迭代器         插入位置       要插入的值     
        2. void insert(iterator pos, size_type n,const T& x)
                          插入位置       元素个数     值
        3. template <class InputIterator>
            void insert (iterator pos, InputIterator f, InputIterator l)
                        两个输入迭代器 指定集合中相应范围 任何集合
    }   程序18.3´ ▽ ` )ﾉ
18.2.4  删除元素
    程序18.4

18.3 list中的元素反转和排序
--
重新排列后的迭代器有效，
list提供了成员函数sort和reverse
STL也提供了算法
这些算法的成员函数版本确保元素相对位置发生变化后指向元素的迭代器仍有效
18.3.1 list::reverse（）反转排列
    程序18.5
18.3.2 排序
    sort函数
    {
        - listIntegers.sort(); // sort in ascending order
        - bool SortPredicate_Descending (const int& lsh, const int& rsh)
          {
              // define criteria for list::sort: return true for desired order
              return (lsh > rsh);
          }
          // Use predicate to sort a list:
          listIntegers.sort (SortPredicate_Descending);
    }
    程序18.6
18.3.3 对包含对象的list进行排序以及删除其中元素
对象排序（姓名、地址、、）：
    - 在list包含的对象所属的类中 实现运算符<
    - 提供一个二元谓词---一个这样的函数，接受两个输入值，返回一个布尔值，指出第一个值是否比第二个值小
    程序18.7
    C++11 forward_list
    程序18.8    对迭代器++ 不能--
