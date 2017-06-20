Chào mừng các bạn đến với mục Algorithm của DNHWiki.

Hôm nay mình sẽ giới thiệu với các bạn một số thuật toán liên quan đến kiểm tra nguyên tố của một số nguyên dương.

# Khởi đầu
Trong tập đề code cơ bản của bạn, kiểu gì cũng phải có bài kiểm tra nguyên tố.
Có một sự thật là khá nhiều bạn không biết phải làm thế nào với bài toán kiểm tra nguyên tố. Ta sẽ giải quyết bài toán này như thế nào?

# Thuật toán
## Một số tính chất nhỏ
- Nhắc lại về số nguyên tố: số nguyên tố là **số chỉ có 2 ước là 1 và chính nó**.
- Những số nào có nhiều hơn 2 ước là hợp số, tức là không phải số nguyên tố
- 0 và 1 không phải số nguyên tố và cũng không phải hợp số (hiển nhiên).
- Số nào cũng chia hết cho 1, cho nên kiểm tra tính chia hết với 1 là vô nghĩa.
- Số nào cũng chia hết cho chính nó, cho nên kiểm tra tính chia hết với chính nó cũng là vô nghĩa nốt.
Do vậy, khi ta nhắc đến 1 số `n` bất kì, ta đều biết nó đã có 2 ước dễ nhận thấy là 1 và chính nó. Khi ta kiểm tra nguyên tố, ta sẽ kiểm tra xem có số nào **khác 1 và chính nó** mà `n` chia hết hay không. Nếu nó chia hết cho 1 số nào đó (khác 1 và chính nó), ta kết luận nó không phải số nguyên tố.
Đến đây, bạn sẽ kêu "ôi, dễ ẹc, cho kiểm tra các số từ 2 đến n-1 là biết ngay ấy mà".
Việc kiểm tra từ 2 đến n-1 có vẻ ổn thoả, nhưng nó hơi thừa. Bạn có thấy rằng:
```
- Nếu n chia hết cho k thì n cũng chia hết cho (n/k) (hiển nhiên).
- Ước lớn nhất có thể của n (mà khác n) <= n/2. Điều này cũng hiển nhiên.
```
Từ 2 nhận xét trên, rõ ràng chỉ cần kiểm tra từ 2 đến sqrt(n) (căn bậc 2 của n) là ta có thể biết ngay n có phải số nguyên tố hay không.

## Lưu ý khi code
Ta có thể dùng `trunc(sqrt(n))` hay bất kì hàm lấy phần nguyên nào để lấy giá trị nguyên của sqrt(n). Tuy nhiên, ta không nên lạm dụng điều này vì cách biểu diễn số thực trong máy tính luôn có sai số (`trunc(3.0) != 3`, thần kì chưa), nên ta sẽ thay đổi một chút. Bạn có thể đọc pseudocode để biết thêm chi tiết.

## Pseudocode
```
prime_check(n) {
	if (n < 2) {
		return false // loại bỏ 2 trường hợp nhảm nhí là 0 và 1
	}
	for (i = 2; i*i <= n; i++) {
		if (n mod i == 0) {
			return false // phát hiện có 1 ước số (khác 1 và n) của n -> n không nguyên tố
		}
	}
	return true // n đã qua vòng kiểm tra, không phát hiện ước số nào khác 1 và n
}
```

## Độ phức tạp
`O(sqrt(n))`, độ phức tạp này khá ổn.

# Sàng nguyên tố Eratosthenes
## Khởi đầu
Một ngày đẹp trời nào đó, bạn nhận được yêu cầu tìm tất cả các số nguyên tố trong khoảng từ 1 đến 1000000.
Bạn tặc lưỡi: "Easy" và bạn lắp ngay đoạn code kiểm tra nguyên tố từng số và chạy từ 1 đến 1000000, tức là
```
prime_check(n) {
	if (n < 2) {
		return false
	}
	for (i = 2; i*i <= n; i++) {
		if (n mod i == 0) {
			return false
		}
	}
	return true
}

count_prime() {
	cnt = 0
	for (i = 1; i <= 1000000; i++) { // rõ ràng 1000000 không nguyên tố rồi, nhưng mình thích thì chạy thôi
		if (prime_check(i)) {
			cnt++
		}
	}
	return cnt
}
```
Ngay lập tức hệ thống trả về kết quả `Time Limit Exceeded` vì code của bạn "lỡ" chạy quá 1s.
Ở bài toán trên, ta chạy `N = 1000000` số, kiểm tra nguyên tố từng đó số nữa, tổng độ phức tạp là O(N * sqrt(N)), tính ra máy tính phải tính đến ngót `1e6 * sqrt(1e6) = 1e9` phép tính. Mà rõ ràng là TLE rồi, máy tính sao chịu nổi 1e9 phép tính 1s.

Một thằng A khác nhận được bài toán tương tự, và bạn thấy sao nó code kì diệu quá, bài toán với số to như thế mà qua dễ dàng. Thằng A thấy bạn không làm được, hắn đã chỉ bảo cho bạn (vì A là người tốt)

## Thuật toán sàng nguyên tố Eratosthenes
Có lẽ ít ai còn nhớ, trong Sách giáo khoa Toán 6 tập 1, thuật toán này đã được đề cập đến (mặc dù không phải ở phần Đọc thêm hay Phụ lục nhưng chắc bạn cũng chả quan tâm).
Nhắc lại cho bạn nhớ:
- Trên sàng này chỉ có các số từ 2 đến N (ta loại 0 và 1 rồi)
- Đầu tiên lấy số 2 (2 là số nguyên tố đầu tiên)
- Chọc toàn bộ những số là bội của 2 và lớn hơn 2 (chúng chia hết cho 1 số khác 1 và chính nó, rõ ràng chúng là hợp số, ta phải loại bỏ chúng)
- Lấy tiếp số 3 (3 là số nguyên tố thứ 2)
- Chọc toàn bộ những số là bội của 3 và lớn hơn 3.
- Lấy tiếp số 5 (5 là số nguyên tố thứ 3)
...
Cứ tiếp tục làm như vậy cho đến khi trên sàng còn 1 đống số, những số đó chính là số nguyên tố.

## Pseudocode
```
eratosthenes(n) {
	for (i = 1; i <= n; i++) {
		check[i] = false // ban đầu chưa số nào bị loại bỏ
	}
	for (i = 2; i <= n; i++) {
		if (check[i] == false) { // số chưa bị loại, đây là số nguyên tố
			for (j = i * 2; j <= n; j += i) {
				check[j] = true // loại tất cả những số chia hết cho i
			}
		}
	}
	for (i = 2; i <= n; i++) {
		if (check[i] == false) {// những số còn giữ lại là số nguyên tố
			print i
		}
	}
}
```

## Độ phức tạp
Tổng độ phức tạp là `O(n/2) + O(n/3) + O(n/5) + ... + O(1) = O(n log log n)`, mình cũng chưa biết tại sao. Bạn có thể Google thêm.
