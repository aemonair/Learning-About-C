Adaptive container自适应容器
==
- 栈和队列
- STL stack
- STL queue
- STL priority\_queue

24.1 栈和队列行为特征
--
24.1.1 栈
LIFO 后进先出
--    --->
   \ /
  |   |
  |   |
  |   |
  |_ _|
std::stack (`#include<stack>`)

24.1.2 队列
FIFO 先进先出
   
```  _________________
===>|  |  |  |  |  |  | ==>
    |__|__|__|__|__|__|

#include <queue>
```    

24.2 使用STL stack类
--
24.2.1 实例化stack
```
template < class elementType,           // 对象类型
           class Container=deque<Type>  // 底层容器
         > class stack;
```
```
std::stack <int> stackInts;
std::stack <Tuna> stackTunas;
std::stack <double, vector <double>> stackDoublesInVector;
```
Pro 24.1
24.2.2 stack成员函数
push
pop
empty
size
top
24.2.3 使用push和pop插入或删除
Pro 24.2
24.3 使用STL queue 类
--
24.3.1 实例化queue
```
template < class elementType,
           class Container = deque<Type>
         > class queue;
```
```
std::queue <int> qIntegers;
std::queue <double, list <double>>qDoublesInList;
std::queue <int> qCopy(qIntegers);
```
Pro 24.3
24.3.2 queue的成员函数
push
pop
front
back
empty
size
24.3.3 使用push在队尾插入和pop队首删除
Pro 24.4
24.4 使用STL优先级队列
--
`STL priority_queue` 最大值 队首
24.4.1 实例化priority_queue类
```
template < 
    class elementType,
    class Container=vector<Type>,
        class Compare=less<typename Container::value_type 
>
class priority_queue
```
```
std::priority_queue <int> pqIntegers;
priority_queue <int, deque<int>, greater<int>> pqIntegers_Inverse;
std::priority_queue <int> pqCopy(pqIntegers);
```
Pro 24.5
24.4.2 priority_queue的成员函数
push
pop
top
empty
size
Pro 24.6
Pro 24.7


