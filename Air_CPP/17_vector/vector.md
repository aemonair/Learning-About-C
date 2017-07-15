17. STL::vector
==

- std::vector 特点
- 操作
- 大小和容量
- deque类

17.1 特点
--
- 末尾添加时间固定，末尾插入时间不随数组大小而异，删除亦如此。
- 数组中间添加或删除所需时间与该元素后面元素个数成正比
- 元素数动态，vector类负责管理内存

 ------------------------------>
|  [0]  |  [1]  | [2] |   < ---末尾插入
 ------------------------------>
#include <vector>

17.2 典型操作
--
    17.2.1 实例化vector
    ```
    指定类型：
    std::vector<int> vecDynamicIntegerArray;
    std::vector<float> vecDynamicFloatArray;
    std::vector<Tuna>  vecDynamicTunaArray ;
    迭代器：
    std::list<int>::const_iterator iElementInSet;
    ```
        程序清单17.1
    17.2.2 push_back()末尾插入元素
        程序清单17.2 size()
    17.2.3 insert()指定位置插入元素
        - insert(begin(), 1)
        - insert(begin(), 2, 2)
	- vector<int> Another(2, 30);
          vec.insert(begin() + 1, Another.begin(), vec.end())
    17.2.4 数组语法访问vector
        - []   下标运算符
        - at() 成员函数
        - 迭代器
        程序清单17.4  []
    17.2.5 指针语法访问vector
        程序清单17.5  指针语法（迭代器）
    17.2.6 删除vector元素
        程序清单17.6  pop_back
17.3 理解大小和容量
--
vector大小 : 实际存储的元素数
vector容量 ：重新分配内存以存储更多元素之前vector能够存储的元素数
 （大小 <= 容量）
   size()  capacity()
        程序清单17.7  size()  capacity()
17.4 STL deque类
--
动态数组类，类似于vector，支持在数组开头和末尾插入或删除

         <------- --------------------- ----------->
在开头插入----->  | 元素[0]  | 元素[1] |  <--------在末尾插入
         <------- --------------------- ----------->
  
    支持push_back + pop_back
    and push_front + pop_front
        程序清单 17.8
