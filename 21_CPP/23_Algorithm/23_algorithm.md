23 <algorithm>
==
- 使用STL算法简化模板代码
- 执行计数，搜索，查找，删除的通用函数;

23.1 STL算法
--
对通用的模板函数提供算法，通过迭代器对容器操作;

23.2 分类
--
  23.2.1 非变序算法
    不改变容器中元素的顺序和内容的算法;
      计数：
      count         查找值与指定值匹配的所有元素;
      count_if      查找值满足指定条件的所有元素;
      搜索：
      search        根据元素相等性(==)或指定二元谓词搜索第一个满足条件的元素
      search_n      搜索与指定值相等或满足指定谓词的n个元素
      find          在搜索与指定值匹配的第一个元素
      find_if       满足指定条件的第一个元素
      find_end      搜索最后一个满足特定条件的元素
      find_first_of 搜索指定序列的任何一个元素第一次出现的位置：
                    另一个重载版本中，搜索满足指定条件的第一个元素
      adjacent_find 在集合中搜索两个相等或满足指定条件的元素
      比较:
      equal         比较两个元素是否相等或使用指定的二元谓词判断两者是否相等
      mismatch      使用指定的二元谓词找出两个元素范围的第一个不同的地方
      lexixographical_conmpare 比较两个序列的元素，判断哪个序列更小
  23.2.2 变序算法
    改变其操作的序列的元素顺序或内容
      初始化算法
      fill             指定值分配给指定范围的每个元素
      fill_n           指定值分配给指定范围中的前n个元素
      generate         指定函数对象返回值分配给指定范围中的每个元素
      generate_n       将指定函数的返回值分配给指定范围的前n个元素
      修改算法
      for_each         对指定范围的每个元素执行的操作。当指定的参数修改了范围时，for_each将是变序算法
      transform        对范围中的每个元素执行指定的一元函数
      复制算法
      copy             将一个范围复制到另一个范围
      copy_backward    将一个范围复制到另一个范围，但在目标范围中将元素排列反转
      剔除算法
      remove           将指定范围中包含指定值的元素删除
      remove_if        指定范围中满足一元谓词的元素删除
      remove_copy      源范围中包含指定值的所有元素复制到目标范围
      unique           比较相邻元素，删除重复元素，
                       重载版本：使用二元谓词判断要删除哪些元素
      unique_copy      将范围内所有元素复制到目标范围，相邻的重复元素除外
      替换
      replace          用一个值替换指定范围内与指定值匹配的所有元素
      replace_if       用一个值来替换范围中满足指定条件的所有元素
      排序
      sort             使用特定排序标准排序，排序标准二元谓词，可能改变相等元素顺序
      stable_sort      类似sort，排序时保持相对顺序不变
      partial_sort     范围内指定数量的元素排序
      partial_sort_copy源范围内的元素复制到目标范围，同时排序
      分区
      partition        将元素分两组：满足指定一元谓词的元素放在第一个组中，
                              其他元素放在第二组，不一定保持相对顺序
      stable_partition 与partition一样将指定范围分为两组，保持元素相对顺序
      可用于排序容器的算法
      binary_search    用于判断是否存在于一个排序集合中
      lower_bound      根据元素值或二元谓词判断可能插入的第一个位置，并返回指向该位置的迭代器
      upper_bound      根据元素值或二元谓词判断可能插入的最后一个位置，并返回指向该位置的迭代器

23.3 使用STL算法
--
  23.3.1 根据值或条件查找元素
    STL find() find_if() 
    ```
    auto iElementFound = find ( vecIntegers.cbegin()
                              , vecINtegers.cend()
                              , NumToFind );
    // Check if find succeeded
    if ( iElementFound != vecIntegers.cend() )
        cout << "Result : Value found!" << endl;
    ```
    ```
    auto iEvenNumber = find_if ( vecIntegers.cbegin()
                              , vecINtegers.cend()
                              ,[](int element){return (element % 2) == 0;});
    if ( iEvenNumber != vecIntegers.cend() )
        cout << "Result : Value found!" << endl;
    ```
    返回迭代器，需要将其同容器的end()或cend()比较，检查查找是否成功;
    程序清单23.1 find find_if

  23.3.2 计算包含给定值或满足给定条件的元素数
    std::count() count_if std::find()
    ```
    size_t nNumZeros = count (vecIntegers.begin(), vecIntegers.end(), 0);
    cout << "Number of instances of '0': " << nNumZeros << endl << endl;
    ```
    std::count_if()计算 满足通过参数传递的一元谓词（函数对象/lambda）
    ```
    // Unary predicate:
    template <typename elementType>
    bool IsEven (const elementType& number)
    {
        return ((number % 2) == 0);
    }
    ...
    // Use the count_if algorithm with the unary predicate IsEven
    size_t nNumEvenElements = count_if ( vecIntegers.begin(),
                                       vecIntegers.end(), IsEven<int>);
    cout << "Number of even elements: " << nNumEvenElements << endl;
    ```
    程序清单23.2 std::count() + count_if() 分别计算有多少个元素包含指定值
  23.3.3 在集合中搜索元素或序列
    search() search_n()
    ```
    auto iRange = search ( vecIntegers.begin()
                         , vecIntegers.end()
                         , listIntegers.begin()
                         , listIntegers.end() );
    ```
    ```
    auto iPartialRange = search_n ( vecIntegers.begin()
                                  , vecIntegers.end()
                                  , 3
                                  , 9 );
    ```
    程序清单23.3
