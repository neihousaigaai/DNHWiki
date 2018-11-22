# 4. Gọi hàm so sánh có sẵn đối với mỗi ngôn ngữ lập trình

Chào mừng các bạn đến với mục Algorithm của DNHWiki.

Sau khi đã nắm chắc cách hoạt động của các thuật toán sorting, bạn có thể tự tin viết lại code sắp xếp các phần tử trong mảng. Tuy nhiên, trong trường hợp các bạn không cần quá quan trọng việc code sorting mà cần nhanh chóng code những chức năng khác, hay bạn sợ cài sai code sorting, bạn có thể sử dụng hàm có sẵn của ngôn ngữ lập trình bạn sử dụng.

Dưới đây là các hàm sorting có sẵn mà mỗi ngôn ngữ hỗ trợ.

## Pascal

Không có =)) Xin chia buồn với bạn nào dùng Pascal.

## C

Có hàm **`qsort()`** thực hiện Quick Sort. Đọc thêm ở [đây](https://daynhauhoc.com/t/ham-qsort-co-the-ban-da-biet/912). Người viết không biết C nên sẽ không thể giải thích kĩ về hàm này.

Cách viết hàm so sánh: [link](https://www.geeksforgeeks.org/comparator-function-of-qsort-in-c/)

Theo của [geeksforgeeks](https://www.geeksforgeeks.org/c-qsort-vs-c-sort/), hàm `qsort()` của C sẽ chậm hơn hàm `sort()` của C++, vì hàm `sort()` đã được tối ưu để độ phức tạp trung bình là `O(n log n)` và độ phức tạp trong trường hợp tệ nhất (worst case) là `O(n log n)`. Còn Quick Sort thuần tuý dù có độ phức tạp trung bình là `O(n log n)` nhưng độ phức tạp trong trường hợp tệ nhất lại là `O(n^2)`.

## C++

Hàm **`sort()`**.

Ngoài ra còn có hàm `stable_sort()`.

Ví dụ:

```cpp
// C++11 or upper

int main() {
    int a[] = { 2, 9, 1, 7, 5 };
    int len_a = sizeof(a) / sizeof(a[0]);
    sort(a, a + len_a); // 1 2 5 7 9
    for (int i=0; i<len_a; i++) std::cout << a[i] << " "; std::cout << endl;

    vector<int> b = { 3, 1, 9, 5, 6 };
    sort(b.begin(), b.begin() + 3); // 1 3 9 5 6
    for (int u: b) std::cout << u << " "; std::cout << endl;
}
```

## Java

- `Arrays.sort()`: https://www.geeksforgeeks.org/arrays-sort-in-java-with-examples/
  - Java 6: Quicksort
  - Java 7: Timsort (Hybrid of Mergesort and Insertion Sort)

- `Collections.sort()` - Mergesort: https://www.geeksforgeeks.org/collections-sort-java-examples/

## Python

Xem hướng dẫn chi tiết ở [đây](https://docs.python.org/3/howto/sorting.html)

- `sorted()`: **Trả về 1 list đã được sort các giá trị,** y như tên của hàm.

- `.sort()`: Phương thức sắp xếp **chỉ áp dụng cho list**, **tác động trực tiếp lên list**, và **trả về None**.

Điều quan trọng nhất của cả 2 hàm/phương thức này là **key parameter**, kiểm soát tiêu chí so sánh phần tử của object (list, tuple,...).

Ví dụ:

```python
>>> a = (2, 3, 1)
>>> sorted(a)
[1, 2, 3]
>>> a
(2, 3, 1)
>>> a.sort()
Traceback (most recent call last):
  File "<pyshell#3>", line 1, in <module>
    a.sort()
AttributeError: 'tuple' object has no attribute 'sort'
>>>
>>> b = {1: 'b', 2: 'c', 3: 'a'}
>>> sorted(b)
[1, 2, 3]
>>> sorted(b.keys())
[1, 2, 3]
>>> sorted(b.values())
['a', 'b', 'c']
>>> sorted(b.values(), reverse=True)
['c', 'b', 'a']
>>>
>>> c = [2, 9, 1, 7, 5]
>>> c.sort()  # trả về None, không hiện gì sau đó cả
>>> c
[1, 2, 5, 7, 9]
```

## Tài liệu tham khảo

Ngó qua [geeksforgeeks](https://www.geeksforgeeks.org/know-sorting-algorithm-set-1-sorting-weapons-used-programming-languages/)
