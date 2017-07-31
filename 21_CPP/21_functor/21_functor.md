21 函数对象
==
- 概念
- 将函数对象用作谓词
- 使用函数对象实现一元二元谓词

21.1 函数对象和谓词的概念
--
用作函数的对象; 实现了operator()的类的对象。
虽然函数和函数指针也可归为函数对象，但实现了operator()的类的对象才能保存状态。(类的成员属性的值)
{
一元函数：接受一个参数的函数，f(x).如果返回布尔值，该函数称为谓词。
二元函数：接受两个参数的函数，f(x,y)。如果返回布尔值，称为二元谓词。
}
21.2 典型用途
--
21.2.1 一元函数
```
// A unary function
template <typename elementTypr>
void FuncDisplayElement(const elementType & element)
{
        cout << element << ' ';
}
```
函数FuncDisplayElement接受一个类型为模板化类型elementType的参数，使用cout显示。另一种实现包含operator():
```
// Struct that can behave as a unary function
template <typename elementType>
struct DisplayElement
{
    void operator ()(const elementType& element) const
    {
        cout << element << ' ';
    }
};
```
程序21,1
程序21,2
21.2.2 一元谓词
程序21,3
程序21,4
21.2.3 二元函数
程序21,5
21.2.3 二元谓词
程序21,6
程序21,7


