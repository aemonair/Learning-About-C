22 C++ lambda
==
- 编写lambda表达式
- 用作谓词
- 可存储可操作的lambda

22.1 lambda ?
--
包含operator()的匿名结构（或类），lambda属于 函数对象;
```c
// struct that behaves as a unary function
template <typename elementType>
struct DisplayElement
{
    void operator () (const elementType& element) const 
    {
        cout << element << ' ';
    } 
}
```

`std::for_eash':
```
// Display the array of integers
for_each (vecIntegers.begin()
        , vecIntegers.end()
        , DisplayElement <int>() );
```

`lambda`:
```
// Display the array of integers using lambda expression
for_each (vecIntegers.begin()
        , vecIntegers.end()
        , [](int& Element) {cout << element << ' ';});
```

编译器遇到
[](int Element) {cout << element << ' ';}
展开为类似结构DisplayElement<int>的表示：
```
struct NoName
{
    void operator () (const int& element) const
    {
        cout << element << ' ';
    }
}
```
22.2 定义lambda
--
[]打头 参数列表()
22.3 一元函数对应lambda
--
一元operator对应的：
[](Type paramName) { // lambda expression code here }
传引用：
[](Type& paramName) { // lambda expression code here }

程序清单22.1 `for_each + lambda`
22.4 一元谓词对应的lambda表达式
--
返回bool：
`[](int& Num){return ((Num % 2) == 0);}`
程序清单22.2 `find_if() + lambda`
22.5 捕获列表接受状态变量的lambda
--
接受参数：
```
int Divisor = 2;

auto iElement = find_if ( begin of a range,
                    end of a range,
                [Divisor](int divdend){return (dividend % Divisor) == 0;});
```
程序清单22.3 `状态（参数） lambda`
22.6 lambda 通用语法
--
多个状态变量，在捕获列表[]中指定：
`[StateVar1, StateVar2](Type& param){// lambda code here; }`
若要修改状态：
`[StateVar1, StateVar2](Type& param) mutable {// lambda code here; }`
这样可以修改[]中的变量，离开lambda表达式后，修改无效。若在外部有效，则传引用
`[&StateVar1, &StateVar2](Type& param) mutable {// lambda code here; }`
多个输入参数：
`[StateVar1, StateVar2](Type1& var1, Type2& var2) {// lambda code here; }`
明确返回类型，可使用->：
```
[State1, State2](Type1 var1, Type2 var2) -> ReturnType
{return (value or expression);}
```
复合语句{}可包含多条分号分隔的语句：
```
[State1, State2](Type1 var1, Type2 var2) -> ReturnType
{Statement 1; Statement 2; return (value or expression);}
```
22.7 二元函数对应lambda
--
[...](Type1& param1Name, Type2 param2Name){// lambda code here }
程序清单22.4 `transform *`
22.8 二元谓词对应lambda
--
程序清单22.5 `sort()`

