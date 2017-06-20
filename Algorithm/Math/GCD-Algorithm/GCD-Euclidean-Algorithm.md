Chào mừng các bạn đến với mục Algorithm của DNHWiki.

Hôm nay mình sẽ giới thiệu với các bạn một thuật toán vô cùng cơ bản mà ai cũng phải học qua: thuật toán Euclid (Euclidean Algorithm) tìm ước chung lớn nhất của 2 số (GCD)

# Khởi đầu
Chắc hẳn khi mới học code hay khi học toán, bạn cũng đã được học về bài toán tìm ước chung lớn nhất.
- Bạn sẽ kêu: Eo, bài này dễ ẹc.
- Thằng A bảo: Phân tích ra thừa số nguyên tố, rồi với mỗi ước số nguyên tố lấy ra số mũ lớn nhất, blah blah blah...
- Thằng B bảo: Chạy tất cả các số từ 1 đến a (hoặc b), tìm số nào lớn nhất mà cả a và b đều chia hết, số đó chính là GCD.
- Thằng C bảo: Chạy tất cả các số từ a (hoặc b) về 1, số đầu tiên mà cả a và b đều chia hết chính là GCD.
...

Thực tế, cả 3 thằng A, B, C đều là những thằng... ngu học. Phân tích nhé:
- Đối với phương án của thằng A: Bạn có chắc là bạn phân tích được a và b ra thừa số nguyên tố không? Bạn sẽ phải biết số nào nguyên tố, rồi viết ra,... rất lằng nhằng. Gặp phải số 2147483647^2 ((2^31-1)^2) là bạn tịt ngóm, kiểm tra số đó nguyên tố hay không cũng đủ mệt rồi.
- Đối với phương án của thằng B: Khôn ngoan hơn một tí, đúng kiểu người đã từng học code, nhưng với a, b to (khoảng 10^8), dường như tìm GCD trong một khoảng thời gian nhỏ (~1s) là điều bất khả thi.
- Đối với phương án của thằng C: Khôn hơn thằng B, nhưng với a, b to và **nguyên tố cùng nhau** (gcd(a, b) = 1), câu chuyện trở nên phức tạp hơn nhiều.

Vậy làm thế nào để giải quyết bài toán này một cách khôn ngoan nhất?

# Thuật toán
## Một tính chất nhỏ
Với 2 số a, b (tạm xét a, b > 0); ta có tính chất sau:
```math
GCD(a, b) = GCD(b, a mod b)
```
Đây chính là tính chất quan trọng nhất khi ta sử dụng thuật toán Euclid.

## Chứng minh
Xét a, b dương.

Đặt `a = b * q + r (0 <= r < b)`
```
-> a mod b = r
```
Đặt `d = GCD(a, b) (d != 0)`
```
-> a = d * m, b = d * n` (m, n nguyên tố cùng nhau)
-> a = b * q + r = (d * n) * q + r = d * (n * q) + r
a chia hết cho d, d * (n * q) chia hết cho d -> r = a - d * (n * q) chia hết cho d
-> d là ước chung của r ( = a mod b) và b. (1)
```
Vậy liệu có ước chung nào khác của r và b hay không?
Ta nhìn lại 2 con số m và n ở trên, ta thấy `GCD(m, n) = 1`, tức là
```GCD(n * q + r, n) = 1
-> GCD(r, n) = 1
r chia hết cho d (theo (1)) -> r = d * k
GCD(r, n) = 1 -> n không chia hết cho bất kì ước nào khác 1 của r -> GCD(n, d) = GCD(n, k) = 1
-> GCD(r, b) = GCD(d * k, d * n) = d * GCD(k, n) = d * 1 = d

-> GCD(a, b) = GCD(b * q + r, b) = GCD(r, b) ( = GCD(b, a mod b)) (đpcm)
```

## Trường hợp đặc biệt
- 1 trong 2 số bằng 0, số còn lại khác 0, giả sử a = 0 thì `GCD(a, b) = GCD(0, b) = b`.
- Có số âm trong 2 số: Rõ ràng ta đang muốn tìm ước chung lớn nhất, ta có
```
  GCD(a, b)
= GCD(sign(a) * abs(a), sign(b) * abs(b)) // sign(a) là dấu của a, a >= 0 thì sign(a) = 1, a < 0 thì sign(a) = -1; abs(a) là giá trị tuyệt đối của a
= sign(a) * sign(b) * GCD(abs(a), abs(b))
```

# Áp dụng
## Pseudocode:
```
gcd(a, b) {
	while (b != 0) do {
		r := a mod b
		a := b
		b := r
	}
	return a //đây chính là GCD
}
```

## Độ phức tạp thuật toán
`O(log a)`, mình cũng chưa biết tại sao =))

## Mở rộng
### Tính ước chung lớn nhất của nhiều số
Theo tính chất `GCD(a, b, c) = GCD(GCD(a, b), c)`, ta có pseudocode:
```
gcd(int a[], int n) { // mảng a chứa các số cần lấy GCD, mảng này có n số
	d = a[0]
	for (i = 1; i < n; i++) {
		d = gcd(d, a[i])
	}
	return d
}
```

### Tính bội chung nhỏ nhất của 2 số
Từ tính chất `a * b = GCD(a, b) * LCM(a, b)`, ta có pseudocode:
```
lcm(a, b) {
	d = gcd(a, b)
	return (a * b / d)
}
```
