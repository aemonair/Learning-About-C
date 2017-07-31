25 STL位标志
==
bitset
vector<bool>

25.1 bitset类
--
std::bitset // #include <bitset>
bitset <4> fourBits;
bitset <5> fiveBits ("10101");
bitset <8> eightBitsCopy(eightbits);

Pro 25.1 

25.2 std::bitset
--
25.2.1 std::bitset运算符
<< 输出流
>> 输入流
& 按位与
| 按位或
^ 按位异或
~ 按位取反
>>= 按位右移
<<= 按位左移
[N] 取位
25.2.2 std::bitset成员方法
set             设置为1
set(N, val=1)   第N+1位设置为val
reset           重置为0
reset(N)        偏移N+1位的位清除
flip            所有位取反
size            返回序列中位数
count           返回序列中1的位数

Pro 25.2
