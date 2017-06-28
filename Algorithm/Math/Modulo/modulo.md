Chào mừng các bạn đến với mục Algorithm của DNHWiki.

Hôm nay mình sẽ giới thiệu với các bạn một số phép toán liên quan đến số dư.

# Khởi đầu
Sẽ có rất nhiều bài toán yêu cầu tính toán với modulo 10^9+7, 10^6+9,... Có thể đây chỉ là vấn đề của Toán, nhưng đối với nhiều bạn không giỏi Toán cho lắm thì đây là một vấn đề lớn.

# Khái niệm
Có 2 số nguyên a, b và một số nguyên n khác 0. Ta định nghĩa `a đồng dư với b` khi a và b có cùng số dư khi chia cho n.

Kí hiệu `a ≡ b (mod n)`

# Tính chất
* Tính phản xạ: `a ≡ a (mod n)`
* Tính đối xứng: `a ≡ b (mod n) <=> b ≡ a (mod n)`
* Tính chất bắc cầu: Nếu `a ≡ b (mod n)` và `b ≡ c (mod n)` thì `a ≡ c (mod n)`

* Nếu `a ≡ b (mod n)` thì:
	- `a + k ≡ b + k (mod n)` với mọi số nguyên k
	- `k * a ≡ k * b (mod n)` với mọi số nguyên k
	- `a^k ≡ b^k (mod n)` với mọi số nguyên không âm k
	- `p(a) ≡ p(b) (mod n)`, với mọi đa thức `p(x)` với các hệ số nguyên

* Nếu `a1 ≡ b1 (mod n)` và `a2 ≡ b2 (mod n)` thì:
	- `a1 + a2 ≡ b1 + b2 (mod n)` (tính chất cộng)
	- `a1 – a2 ≡ b1 – b2 (mod n)` (tính chất trừ)
	- `a1 * a2 ≡ b1 * b2 (mod n)` (tính chất nhân)

* Ngược lại một số tính chất tiêu biểu ta đã nói ở trên, ta có:
	- Nếu `a + k ≡ b + k (mod n)` với mọi số nguyên k thì `a ≡ b (mod n)`
	- Nếu `k * a ≡ k * b (mod n)` và k, n nguyên tố cùng nhau thì `a ≡ b (mod n)`

* Phép nhân nghịch đảo số dư (hay vừa chia vừa lấy dư):
	- Ví dụ: Bạn có thể tính kết quả của phép tính `(6 / 2) mod 10` một cách dễ dàng, nhưng nếu tôi cho bạn:
	```
	a = 100000! mod (10^9+7)
	b = 50000! mod (10^9+7)
	c = 49999! mod (10^9+7)
	```
	bạn không thể nào tính `100000! / (50000! * 49999!) mod (10^9+7)` bằng cách `(a / (b*c)) mod (10^9+7)` được.
	Từ đây ta có định nghĩa về phép nhân nghịch đảo số dư.
	- Tồn tại phép nhân nghịch đảo số dư: tồn tại một số nguyên kí hiệu là `a^(-1)` mà `a * (a^(-1)) ≡ 1 (mod n)` <=> a và n nguyên tố cùng nhau.
	- Nếu `a ≡ b (mod n)` và tồn tại `a^(–1)` thì `a^(–1) ≡ b^(–1) (mod n)` (tính chất nhân nghịch đảo)
	- Định nghĩa phép chia: `a / b ≡ a * (b^(-1)) (mod n)` với b và n nguyên tố cùng nhau.

* Một số tính chất thường dùng:
	- Định lý nhỏ Fermat: Nếu p nguyên tố thì `a^(p-1) ≡ 1 (mod p)` với `0 < a < p`
	- Hệ quả của định lý nhỏ Fermat: Nếu p nguyên tố thì `a^(−1) ≡ a^(p − 2) (mod p)` (phép nhân nghịch đảo số dư, 0 < a < p).
	- Định lý Euler: Nếu a và n nguyên tố cùng nhau thì `a^φ(n) ≡ 1 (mod n)` với `φ` là Euler's totient function (ở [đây](/Algorithm/Math/Modulo/Euler-s_totient_function_(ETF).md))
	- Hệ của của định lý Euler:
		+ Nếu a và n nguyên tố cùng nhau thì `a^(−1) ≡ a^(φ(n) − 1) (mod n)`.
		+ Nếu `a ≡ b (mod φ(n))` thì `k^a ≡ k^b (mod n)` với k và n nguyên tố cùng nhau.
	- Định lý Wilson: p nguyên tố <=> `(p − 1)! ≡ −1 (mod p)`
	- Định lý số dư Trung Hoa (Chinese remainder theorem): Nếu `x ≡ a (mod m)` và `x ≡ b (mod n)` với m, n nguyên tố cùng nhau thì `x ≡ b*(m_n^(–1))*m + a*(n_m^(–1))*n (mod m * n)` (với `m_n^(−1) = m^(-1) mod n` và `n_m^(−1) = n^(-1) mod m`).
	- Quadratic residue: Số nguyên a là quadratic residue mod n nếu tồn tại một số nguyên x mà `x^2 ≡ a (mod n)`. Euler's criterion asserts that, nếu p là số nguyên tố lẻ, thì a là quadratic residue mod p <=> `a^((p-1)/2) ≡ 1 (mod p)`

# Tài liệu tham khảo
- [Modular arithmetic](https://en.wikipedia.org/wiki/Modular_arithmetic)
- [Modulo operation](https://en.wikipedia.org/wiki/Modulo_operation)
