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
	- `a + k ≡ b + k (mod n)` với mọi số nguyên k (compatibility with translation)
	- `k * a ≡ k * b (mod n)` với mọi số nguyên k (compatibility with scaling)
	- `a^k ≡ b^k (mod n)` với mọi số nguyên không âm k (compatibility with exponentiation)
	- `p(a) ≡ p(b) (mod n)`, với mọi đa thức `p(x)` với các hệ số nguyên (compatibility with polynomial evaluation)

* Nếu `a1 ≡ b1 (mod n)` và `a2 ≡ b2 (mod n)` thì:
	- `a1 + a2 ≡ b1 + b2 (mod n)` (compatibility with addition)
	- `a1 – a2 ≡ b1 – b2 (mod n)` (compatibility with subtraction)
	- `a1 * a2 ≡ b1 * b2 (mod n)` (compatibility with multiplication)

If a ≡ b (mod n), then it is false, in general, that ka ≡ kb (mod n). However, one has:

If c ≡ d (mod φ(n)), where φ is Euler's totient function, then ac ≡ ad (mod n) provided a is coprime with n

* For cancellation of common terms, we have the following rules:
	- Nếu `a + k ≡ b + k (mod n)` với mọi số nguyên k thì `a ≡ b (mod n)`
	- Nếu `k * a ≡ k * b (mod n)` và k với n nguyên tố cùng nhau thì `a ≡ b (mod n)`

* Phép nhân nghịch đảo số dư (hay vừa chia vừa số dư):
	- Ví dụ: Bạn có thể tính kết quả của phép tính `(6 / 2) mod 10` một cách dễ dàng, nhưng nếu tôi cho bạn:
	```
	a = 100000! mod (10^9+7)
	b = 50000! mod (10^9+7)
	c = 49999! mod (10^9+7)
	```
	bạn không thể nào tính `100000! / (50000! * 49999!) mod (10^9+7)` bằng cách `(a / (b*c)) mod (10^9+7)` được.
	Từ đây ta có định nghĩa về phép nhân nghịch đảo số dư.
	- Tồn tại phép nhân nghịch đảo số dư: tồn tại một số nguyên kí hiệu là `a^(-1)` mà `a * (a^(-1)) ≡ 1 (mod n)` <=> a và n nguyên tố cùng nhau.
	- Nếu `a ≡ b (mod n)` và tồn tại `a^(–1)` thì `a^(–1) ≡ b^(–1) (mod n)` (compatibility with multiplicative inverse)
	- Định nghĩa phép chia: `a / b ≡ a * (b^(-1)) (mod n)` với b và n nguyên tố cùng nhau.

In particular, if p is a prime number then a is coprime with p for every a such that 0 < a < p. Thus, a multiplicative inverse exists for all a that are not congruent to zero modulo p.

Some of the more advanced properties of congruence relations are the following:
* Một số tính chất khác:
	- Định lý nhỏ Fermat: Nếu p nguyên tố thì `a^(p-1) ≡ 1 (mod p)` với `0 < a < p`
	- Hệ quả của định lý nhỏ Fermat: Nếu p nguyên tố thì `a^(−1) ≡ a^(p − 2) (mod p)` (phép nhân nghịch đảo số dư, 0 < a < p).
	- Định lý Euler: Nếu a và n nguyên tố cùng nhau thì `a^φ(n) ≡ 1 (mod n)` với `φ` là Euler's totient function (sẽ nói ở bài sau)
	- Hệ của của định lý Euler:
		+ Nếu a và n nguyên tố cùng nhau thì `a^(−1) ≡ a^(φ(n) − 1) (mod n)`.
		+ Nếu `a ≡ b (mod φ(n))` thì `k^a ≡ k^b (mod n)` với k và n nguyên tố cùng nhau.
	- Định lý Wilson: p nguyên tố <=> `(p − 1)! ≡ −1 (mod p)`
	- Định lý số dư Trung Hoa (Chinese remainder theorem): Nếu `x ≡ a (mod m)` và `x ≡ b (mod n)` với m, n nguyên tố cùng nhau thì `x ≡ b*(m_n^(–1))*m + a*(n_m^(–1))*n (mod m * n)` (với `m_n^(−1) = m^(-1) mod n` và `n_m^(−1) = n^(-1) mod m`).
	- Định lý Lagrange: The congruence f (x) ≡ 0 (mod p), where p is prime, and f (x) = a0 xn + ... + an is a polynomial with integer coefficients such that a0 ≠ 0 (mod p), has at most n roots.
	- Primitive root modulo n: A number g is a primitive root modulo n if, for every integer a co-prime to n, there is an integer k such that gk ≡ a (mod n). A primitive root modulo n exits if and only if n is equal to 2, 4, pk or 2pk, where p is an odd prime number. If a primitive root modulo n exists, then there are exactly φ(φ(n)) such primitive roots, where φ is the Euler's totient function.
	- Quadratic residue: Số nguyên a là quadratic residue mod n nếu tồn tại một số nguyên x mà `x^2 ≡ a (mod n)`. Euler's criterion asserts that, nếu p là số nguyên tố lẻ, thì a là quadratic residue mod p <=> `a^((p-1)/2) ≡ 1 (mod p)`

# Tài liệu tham khảo
- [Modular arithmetic](https://en.wikipedia.org/wiki/Modular_arithmetic)
- [Modulo operation](https://en.wikipedia.org/wiki/Modulo_operation)
