20 `STL_map`
==

- `map multimap unordered_map unordered_multimap`;
- 插入 删除 查找
- 提供自定义排序谓词
- 散列表工作原理

20.1 简介
--
map和multimap是键-值对容器，支持根据键进行查找。

```
-------------------------
|  ____________________  |
| |  ------    ------  | |
| | |  键  |  |  值  | | | 
| | |------|  |------| | |
| |--------------------| |
| |_______键值对_______| |
|                        |
|  ____________________  |
| |  ------    ------  | |
| | |  键  |  |  值  | | | 
| | |------|  |------| | |
| |--------------------| |
| |_______键值对_______| |
|           |            |
|           |            |
|           |            |
|           |            |
|  ____________________  |
| |  ------    ------  | |
| | |   键 |  |  值  | | | 
| | |------|  |------| | |
| |--------------------| |
| |_______键值对_______| |
|________________________|
|    Map(键-值对的容器   |
|________按照键排序）____|

map和multimap 之间的区别在于，后者能够存储重复的键，而前者只能存储惟一的键。
map和multimap内部结构像二叉树，插入时排序，不能替换新元素。
#include <map>

20.2 基本操作
--
模板类，先实例化;
20.2.1 实例化
```
map <keyType, valueType, Predicate=std::less <keyType>>mapObject;
multimap <keyType, valueType, Predicate=std::less <keyType> >mmapObject;
```
第三个模板参数可选，如果指定了键和键的类型，省略第三个模板参数，std::map和std::multimap将把std::less<>作为排序标准。
  程序20.1
20.2.2 在STL map或multimap插入
    insert ：
```
std::map<int, std::string> mapIntToString1;
// insert pair of key and value using make_pair function
mapIntToString.insert(make_pair(-1, "Minus One"));
```
mapIntToString.insert(pair<int, string>(1000, "One Thousand"));
mapIntToString [1000] = "One Million";

mapIntToString [1000] = "One Million";
std::multimap<int, std::string> mmapIntToString(
                                     mapIntToString.cbegin(), 
                                     mapIntToString.cend() );
程序20.2
20.2.3 查找
`multimap <int, string>::const_iterator iPairFound = mapIntToString.find (Key);`
auto iPairFound = mapIntToString.find(Key);
```
if (iPairFound != mapIntToString.end())
{
    cout << "Key " << iPairFound->first << " points to Value: ";
    cout << iPairFound->second << endl;
}
else
    cout << "Sorry, pair with key " << Key << " not in map" << endl;
```
程序20.3
20.2.4 map查找
  可能包含多个键相同的键-值对，可使用multimap::count()确定多少个值，再对迭代器递增。
```
auto iPairFound = mmapIntToString.find(Key);

// Check if "find" succeeded
if (iPairFound != mmapIntToString.end())
{
    // Find the number of pairs that have the same supplied key
    size_t nNumPairsInMap = mmapIntToString.count(1000);

    for (size_t nValuesCounter = 0;
                nValuesCounter < nNumPairsInMap;
             ++ nValuesCounter )
    {
        cout << "Key: " << iPairFound->first;
        cout << ", Value [" << nValuesCounter << "] = ";
        cout << iPairFound->second << endl;

        ++ iPairFound;
    }
}
else
    cout << "Element not found in the multimap";
```
20.2.5 删除元素
参数：
mapObject.erase (key);
迭代器：
mapObject.erase (iElement);
指定边界：
mapObject.erase (iLowerBound, iUpperBound);
程序20.4

20.3 提供自定义的排序谓词
--
可编写一个二元谓词，实现operator()的类或结构：
```
template <typename T>
struct Predicate
{
    bool operator()(const KeyType& key1, const KeyType& key2)
    {
        // your sort priority logic here
    }
};
```
对于键类型是std::string的map，默认排序谓词std::less<T> 导致std::string类型的<运算符进行排序，因此区分大小写。
程序20.5

20.3.1 散列表的工作原理
  散列表 键值对集合 根据给定的键，找到相应的值。
  散列表 键值对 存储在桶中，每个桶有索引，指出位置。
  Index = HashFunction(Key, TableSize)
20.3.2 C++11 unorded_map和unordered_multimap
  类似于map
  // instantiate unordered_map of int to string:
  unordered_map<int, string> umapIntToString;

  // insert()
  umapIntToString.insert(make_pair(1000,"Thousand"));

  // find():
  auto iPairThousand = umapIntToString.find(1000);
  cout << iPairThousand->first << " -> " << iPairThousand[1000] << endl;


  unordered_map<int,string>::hasher HFn =
           umapIntToString.hash_function();

  size_t HashingValue1000 = HFn(1000);

  cout << "Load factor: " << umapIntToString.load_factor() << endl;
  cout << "Max load factor: " << umapIntToString.max_load_factor() << endl;
  cout << "Max bucket factor: " << umapIntToString.max_bucket__factor() << endl;
