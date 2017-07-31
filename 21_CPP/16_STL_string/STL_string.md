`16 STL_string`
==

字符串操作类
使用STL string
拼接 附加 查找操作
基于模板的实现

16.1 why exist？
--
- 减少程序员创建和操作时的工作
- 内部管理内存细节，稳定
- 提供复制构造函数，赋值运算符
- 复制 截短 查找 删除 函数
- 比较 运算符
- 集中于需求

16.2 使用
--
函数
{
   - 复制
   - 连接
   - 查找
   - 截短
   - 反转/转换
  16.2.1 实例化和复制
  {
        1. const char * constCStyleString = "Hello String!";
           std::string strFromConst (constCStyleString);
        2. std::string strFromConst = constCStyleString;
        3. std::string str2 ("Hello String!");
        4. std::string str2Copy (str2);
        5. std::string strPartialCopy(constCStyleString, 5);
        5. std::string strRepeatChars(10, 'a');
  }
    程序清单16.1
  16.2.2 访问string字符内容
    程序清单16.2
        []下标 iterator迭代器
  16.2.3 拼接字符串
    程序清单16.3
        +=运算符 append成员函数
  16.2.4 在string中查找
    程序清单16.4
        find
  16.2.5 截短string
    程序清单16.5
       erase - 给定偏移位置和字符数
             - 给定指向迭代器
             - 两个迭代器范围
  16.2.6 字符串反转
    程序清单16.6
       reverse
  16.2.7 大小写转换
    程序清单16.7
       transform
           http://www.cnblogs.com/CodeMIRACLE/p/5290724.html
} 

16.3 基于模板的STL—string实现
--
std::string 是 `std::basic_string <T>` 的具体化：
    template<class _Elem,
             class _Traits,
             class _Ax>
             class basic_string
    _Elem , 指定了basic_string对象将存储的数据类型
    std::string 使用 _Elem = char 具体化模板basic_string
           typedef basic_string<char, char_traits<char>,allocator<char>>
                   string;
        wstring 使用 _Elem =wchar 具体化模板basic_string
           typedef basic_string<wchar, char_traits<wchar>,allocator<wchar>>
                   string;

