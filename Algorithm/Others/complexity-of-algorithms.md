Chào mừng các bạn đến với mục Algorithm của DNHWiki.

Hôm nay mình sẽ giới thiệu với các bạn một khái niệm cơ bản mà cũng vô cùng quan trọng khi học môn CTDL&GT: Độ phức tạp của thuật toán.

# Khởi đầu
Hãy tưởng tượng bạn cùng đám bạn đang ở trong một lớp học lập trình. Cô giáo giao cho học sinh trong lớp bài tập:

> Kiểm tra 1 số có phải số nguyên tố hay không.

Ngoài thằng A "siêu đẳng" về code và bạn - thằng B - ở tầm "biết code" ra, lũ còn lại không biết phải làm thế nào. Thấy lớp dốt quá, cô đưa code của cô ra:
```cpp
// đây là đoạn code của cô, đơn giản và ngắn gọn
bool is_prime(int n) {
	if (n < 2) return false;

	for (int k = 2; k <= n - 1; k++) 
		if (n % k == 0) return false;
	
	return true;
}
```
Bạn - một thằng "biết code", vỗ đùi đen đét, bảo: "Ôi dào, hoá ra code của cô cũng y như code mình."
Thằng A - một thằng "siêu đẳng" về code, mới cãi: "Code như thế này làm sao được! **Vẫn chưa tối ưu, vẫn chạy nhiều trường hợp thừa.**"
Cô giáo thấy 2 thằng cãi nhau to, cô mới bảo: "A và B về chỗ. B 10 điểm, A 9 điểm vì code em không giống code của cô."
Ta hãy nhìn code của A một chút:
```cpp
// đây là code của A, không có comment, nhưng mình thêm vào cho đẹp
bool is_prime(int n) {
	if (n < 2) return false;
	
	if (n > 2) {
		if (n % 2 == 0) return false;

		for (int k = 3; k * k <= n; k += 2)  // điều kiện k * k <= n tương đương với k <= trunc(sqrt(n)). Trunc là hàm lấy phần nguyên.
			if (n % k == 0) return false;
	}
	return true;
}
```
Một vị đại hiệp giấu mặt bước vào lớp. Anh ta nói: "Ta không tin cô giáo. Hai vị tráng sĩ hãy thử xem số `10^9+9` có phải số nguyên tố hay không. Vị nào xong trước, vị đó xứng đáng giành điểm 10.". Giọng nói của vị đại hiệp này sang sảng như tiếng chuông, tràn đầy uy lực, ai nấy đều khiếp sợ.

Vẫn đang hăng tiết, cả bạn và A đều thử. Và điều gì phải đến thì sẽ đến, A nói một cách đầy dõng dạc: "Số này chính là số nguyên tố" sau 1 nốt nhạc. Còn bạn thì sau một khoảng thời gian chờ đợi cái máy tính cùi ra kết quả đến dài cả cổ, bạn mới rụt rè lên tiếng: "Dạ, đúng là số nguyên tố ạ."

Vị đại hiệp ấy cười ha hả rồi đi. Ít ai biết được, vị đại hiệp ấy chính là người bịa ra câu chuyện này, hiện vẫn đang hành nghề code dạo =))

---
Câu chuyện trên tưởng như vô thưởng vô phạt, tuy nhiên vẫn có một số bài học ta phải rút ra:
- Như trong bài trên, không phải cứ ỷ vào mình biêt code là chạy từ 2 đến n-1 là hay. Vận dụng một chút kiến thức toán học vào là bạn có thể loại bớt rất nhiều trường hợp thừa.
- Trong nhiều trường hợp, bạn phải thực hiện công việc với dữ liệu rất lớn (như số `10^9+9` của vị đại hiệp vừa rồi, hay một danh sách dài gồm 1 triệu người dùng và hàng nghìn thông tin khác,...). Đôi lúc không phải cứ duyệt hết tất cả các khả năng có thể là tốt.

Trong đời thực, bạn vẫn muốn biết code mình viết ra chạy trong bao lâu, tốn bao nhiêu bộ nhớ, liệu máy tính cùi của mình có chạy nổi không,...
Thời gian máy của bạn chạy code một phần phụ thuộc vào cấu hình máy, và cũng một phần phụ thuộc vào code của bạn. Code bạn càng "phức tạp", thời gian chạy càng cao. Bài học hôm nay sẽ giúp các bạn hiểu rõ hơn về sự "phức tạp" của thuật toán hay của những đoạn code mà bạn vẫn code thường ngày.

# Đánh giá thời gian thực hiện thuật toán
- Có 2 cách tiếp cận để đánh giá thời gian thực hiện của một thuật toán:
	- Cách 1: dùng thực nghiệm để kiểm tra: viết và chạy chương trình với các dữ liệu vào khác nhau trên 1 máy tính. Cách này ta đã thấy ở câu chuyện trên.
	- Cách 2: dùng lí thuyết để dự đoán thời gian thực hiện chương trình. Thời gian thực hiện chương trình phụ thuộc vào cả input và cả code của bạn nữa, tức là input càng to thì thời gian thực hiện chương trình của bạn càng to (chẳng hạn)

- Miêu tả lí thuyết:
Thông thường cỡ của dữ liệu vào là một số nguyên dương n, ta sử dụng hàm số T(n) trong đó n là cỡ của dữ liệu vào để biểu diễn thời thực hiện của một thuật toán.
(Ví dụ: đối với bài toán kiểm tra số nguyên tố thì cỡ của dữ liệu vào là số `n` cần kiểm tra; hay với bài toán sắp xếp dãy số, cỡ của dữ liệu vào là số phần tử của dãy).

Trong tài liệu này, chúng ta hiểu hàm số T(n) là thời gian nhiều nhất cần thiết để thực hiện thuật toán với mọi bộ dữ liệu đầu vào cỡ n.

Sử dụng kí hiệu toán học O (ô lớn) để mô tả độ lớn của hàm T(n). Giả sử n là một số nguyên dương, T(n) và f(n) là hai hàm thực không âm. Ta viết `T(n) = O(f(n))` nếu và chỉ nếu tồn tại các hằng số dương c và n_0, sao cho `T(n) <= c * f(n)`, với mọi `n >= n_0`.

Nếu một thuật toán có thời gian thực hiện `T(n) = O(f(n))` chúng ta nói rằng thuật toán có thời gian thực hiện cấp `f(n)`, hay thuật toán có độ phức tạp `O(f(n))`.

- Nói một cách đơn giản, `f(n)` là **hạng tử có bậc cao nhất** của đa thức `T(n)`. Đôi khi ta không cần quan tâm đến hệ số đi kèm `f(n)`, tức là
```
O(k * f(n)) = O(f(n)) với k là hằng số dương
```
- Ví dụ:
Giả sử `T(n) = n^2 + 2n`, ta có `n^2 + 2n < n^2 + 2n^2 = 3n^2` với mọi `n >= 1`

Vậy T(n) = O(n^2), trong trường hợp này ta nói thuật toán có thời gian thực hiện cấp n^2.

# Các quy tắc đánh giá thời gian thực hiện thuật toán
- Ta định nghĩa các câu lệnh bằng đệ quy như sau:
	- Các phép gán, đọc, viết là các câu lệnh (được gọi là lệnh đơn).
	
	- Nếu S1, S2, ..., Sm là câu lệnh thì
	```cpp
	{
		S1;
		S2;
		...
		Sm;
	}
	```
	là câu lệnh (được gọi là lệnh hợp thành hay khối lệnh).
	- Nếu S1 và S2 là các câu lệnh và E là biểu thức logic thì
	```cpp
	if (E) {
		S1;
	} else {
		S2;
	}
	```
	là câu lệnh (được gọi là lệnh rẽ nhánh hay lệnh If).

	- Các dạng có sử dụng vòng lặp như
	```cpp
	// S là câu lệnh và E là biểu thức logic
	while (E) {
		S;
	}
	```
	```cpp
	// S là câu lệnh và E là biểu thức logic
	do {
		S;
	} while (E);
	```
	```cpp
	// S là câu lệnh, E1, E2 là các biểu thức logic và F là một phép gán
	for (E1; E2; F) {
		S;
	}
	```
	đều là câu lệnh (được gọi là lệnh lặp).

- Để đánh giá, chúng ta phân tích chương trình xuất phát từ các lệnh đơn, rồi đánh giá các lệnh phức tạp hơn, cuối cùng đánh giá được thời gian thực hiện của chương trình, cụ thể:

	- Thời gian thực hiện các lệnh đơn (gán, đọc, viết, tính toán: cộng, trừ, nhân, chia, mod,...) là O(1)

	- Lệnh hợp thành: giả sử thời gian thực hiện của S1, S2,…,Sm tương ứng là `O(f_1(n)), O(f_2(n)),..., O(f_m(n))`. Khi đó thời gian thực hiện của lệnh hợp thành là `O(max(f_1(n), f_2(n),..., f_m(n)))`

	- Lệnh `if`: giả sử thời gian thực hiện của S1, S2 tương ứng là `O(f_1(n)), O(f_2(n))`. Khi đó thời gian thực hiện của lệnh `if` là `O(max(f_1(n), f_2(n))`.

	- Lệnh lặp: giả sử thời gian thực hiện lệnh S (thân của lệnh lặp) là `O(f(n))` và `g(n)` là số lần lặp tối đa thực hiện lệnh S. Khi đó thời gian thực hiện lệnh lặp là `O(f(n)*g(n))`.

> Tuỳ vào mỗi thuật toán sẽ có độ phức tạp khác nhau. Lí thuyết của phần này sử dụng khá nhiều đến tư duy toán nên có thể nhiều bạn sẽ không hiểu. Tuy nhiên mình mong rằng bạn sẽ cố gắng đọc và nắm được phần nào lí thuyết của phần này.

# Một số độ phức tạp thường gặp
Tên gọi          | Độ phức tạp             | Ví dụ              | Một số thuật toán có độ phức tạp như vậy
-----------------|-------------------------|--------------------|-----------------------------------------------------
 hằng số         | O(1)                    | `5, 10,...`        | Các phép toán `+, -, *, /,...`; truy cập vào phần tử trong mảng
 log (hay ln)    | O(log n)                | `log n, log(n^2)`  | Chặt nhị phân (binary search), dùng chia để trị để tính luỹ thừa,...
 log log         | O(log log n)            |                    | 
 n log log       | O(n log log n)          |                    | Sàng Eratosthenes
 luỹ thừa phân số| O(n^c) (0 < c < 1)      | `n^(1/2), n^(2/3)` | Kiểm tra nguyên tố thông thường
 tuyến tính      | O(n)                    | `n, 2*n`           | Duyệt tất cả các phần tử của mảng
 n log           | O(n log n)              | `n log n, log n!`  | Merge sort
 bình phương     | O(n^2)                  | `n^2`              | Bubble sort, Insertion sort
 lập phương      | O(n^3)                  | `n^3`              | Thuật toán Floyd-Warshall tìm đường đi ngắn nhất trên đồ thị
 đa thức         | O(n^k) (k nguyên dương) | `n^4, n^5`         |
 luỹ thừa        | O(k^n) (k > 1)          | `2^n, 10^n`        | Thuật toán sinh dãy có n phần tử, mỗi phần tử nhỏ hơn k
 giai thừa       | O(n!)                   | `O(n!)`            | Thuật toán sinh hoán vị của dãy từ 1 đến n

# Tài liệu tham khảo
Tài liệu chuyên Tin quyển 1 - Nhiều tác giả
