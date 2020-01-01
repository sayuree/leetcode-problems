This is a repository dedicated to track my progression of solving Leetcode problems. 

The commits will be made daily. 

The categories are divided into folders:
    - Arrays;
    - Linked Lists;

## Vectors in C++ CheatSheet

### Constructors 
| Operation | Description | Time Complexity | 
| ---| --- | ---|
| vector<T> v; |              Make an empty vector.                |                  O(1) |
| vector<T> v(n);   |        Make a vector with N elements.                          |  O(n) |
| vector<T> v(n, value); |   Make a vector with N elements, initialized to value.    |  O(n) |
| vector<T> v(begin, end); |  Make a vector and copy the elements from begin to end.  |  O(n) |

### Accessors
| Operation | Description | Time Complexity |
| --- | --- | ---|
| v[i] |         Return (or set) the I'th element.                      |  O(1)|
|v.at(i) |      Return (or set) the I'th element, with bounds checking. | O(1)|
|v.size() |     Return current number of elements.                      | O(1)|
|v.empty() |    Return true if vector is empty.                         | O(1)|
|v.begin()  |   Return random access iterator to start.                 | O(1)|
|v.end()     |  Return random access iterator to end.                   | O(1)|
|v.front()   |  Return the first element.                               | O(1) |
|v.back()     | Return the last element.                                | O(1) |
|v.capacity()  | Return maximum number of elements.                     |  O(1) |

### Modifiers
| Operation | Description | Time Complexity |
| --- | --- | ---|
|v.push_back(value)        | Add value to end.  |                                              O(1) (amortized)|
|v.insert(iterator, value)|  Insert value at the position indexed by iterator.   |             O(n)|
|v.pop_back()            |   Remove value from end.                               |            O(1)|
|v.assign(begin, end)   |    Clear the container and copy in the elements from begin to end.|  O(n)|
|v.erase(iterator)     |     Erase value indexed by iterator.                                | O(n)|
|v.erase(begin, end)  |      Erase the elements from begin to end.                           | O(n)|