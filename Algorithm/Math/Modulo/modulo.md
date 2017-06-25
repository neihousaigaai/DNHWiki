Chào mừng các bạn đến với mục Algorithm của DNHWiki.

Hôm nay mình sẽ giới thiệu với các bạn một số phép toán liên quan đến số dư.

# Khởi đầu
Sẽ có rất nhiều bài toán yêu cầu tính toán với modulo 10^9+7, 10^6+9,... Có thể đây chỉ là vấn đề của Toán, nhưng đối với nhiều bạn không giỏi Toán cho lắm thì đây là một vấn đề lớn.

# Khái niệm
Có 2 số nguyên a, b và một số nguyên n khác 0. Ta định nghĩa `a đồng dư với b` khi a và b có cùng số dư khi chia cho n.

Kí hiệu `a ≡ b (mod n)`

# Tính chất
- Tính phản xạ: `a ≡ a (mod n)`
- Tính đối xứng: `a ≡ b (mod n) <=> b ≡ a (mod n)`
- Tính chất bắc cầu: Nếu `a ≡ b (mod n)` và `b ≡ c (mod n)` thì `a ≡ c (mod n)`

- Nếu `a ≡ b (mod n)` thì:
  + `a + k ≡ b + k (mod n)` với mọi số nguyên k (compatibility with translation)
  + `k * a ≡ k * b (mod n)` với mọi số nguyên k (compatibility with scaling)
  + `a^k ≡ b^k (mod n)` với mọi số nguyên không âm k (compatibility with exponentiation)
  + `p(a) ≡ p(b) (mod n)`, với mọi đa thức `p(x)` với các hệ số nguyên (compatibility with polynomial evaluation)

- Nếu `a1 ≡ b1 (mod n)` và `a2 ≡ b2 (mod n)` thì:
  + `a1 + a2 ≡ b1 + b2 (mod n)` (compatibility with addition)
  + `a1 – a2 ≡ b1 – b2 (mod n)` (compatibility with subtraction)
  + `a1 * a2 ≡ b1 * b2 (mod n)` (compatibility with multiplication)

If a ≡ b (mod n), then it is false, in general, that ka ≡ kb (mod n). However, one has:

If c ≡ d (mod φ(n)), where φ is Euler's totient function, then ac ≡ ad (mod n) provided a is coprime with n

- For cancellation of common terms, we have the following rules:
  + Nếu `a + k ≡ b + k (mod n)` với mọi số nguyên k thì `a ≡ b (mod n)`
  + Nếu `k * a ≡ k * b (mod n)` và k với n nguyên tố cùng nhau thì `a ≡ b (mod n)`

Lastly, let the multiplicative inverse of a be denoted by a–1, then we have the following rules:

Existence of a multiplicative inverse: there exists an integer denoted a–1 such that aa–1 ≡ 1 (mod n) if and only if a is coprime with n.
If a ≡ b (mod n) and a–1 exists, then a–1 ≡ b–1 (mod n) (compatibility with multiplicative inverse)
If a x ≡ b (mod n) and a is coprime to n, the solution to this linear congruence is given by x ≡ a–1b (mod n)
In particular, if p is a prime number then a is coprime with p for every a such that 0 < a < p. Thus, a multiplicative inverse exists for all a that are not congruent to zero modulo p.

Some of the more advanced properties of congruence relations are the following:

Fermat's little theorem: If p is prime, then a p – 1 ≡ 1 (mod p) for 0 < a < p
Euler's theorem: If a and n are coprime, then a φ(n) ≡ 1 (mod n), where φ is Euler's totient function
A simple consequence of Fermat's little theorem is that if p is prime, then a−1 ≡ a p − 2 (mod p) is the multiplicative inverse of 0 < a < p. More generally, from Euler's theorem, if a and n are coprime, then a−1 ≡ a φ(n) − 1 (mod n).
Another simple consequence is that if a ≡ b (mod φ(n)), where φ is Euler's totient function, then ka ≡ kb (mod n) provided k is coprime with n
Wilson's theorem: p is prime if and only if (p − 1)! ≡ −1 (mod p)
Chinese remainder theorem: If x ≡ a (mod m) and x ≡ b (mod n) such that m and n are co-prime, then x ≡ b mn–1 m + a nm–1 n (mod mn) where mn−1 is the inverse of m modulo n and nm−1 is the inverse of n modulo m
Lagrange's theorem: The congruence f (x) ≡ 0 (mod p), where p is prime, and f (x) = a0 xn + ... + an is a polynomial with integer coefficients such that a0 ≠ 0 (mod p), has at most n roots.
Primitive root modulo n: A number g is a primitive root modulo n if, for every integer a co-prime to n, there is an integer k such that gk ≡ a (mod n). A primitive root modulo n exits if and only if n is equal to 2, 4, pk or 2pk, where p is an odd prime number. If a primitive root modulo n exists, then there are exactly φ(φ(n)) such primitive roots, where φ is the Euler's totient function.
Quadratic residue: An integer a is a quadratic residue modulo n, if there exists an integer x such that x2 ≡ a (mod n). Euler's criterion asserts that, if p is an odd prime, then a is a quadratic residue modulo p if and only if
{\displaystyle a^{\frac {p-1}{2}}\equiv 1{\pmod {p}}.} {\displaystyle a^{\frac {p-1}{2}}\equiv 1{\pmod {p}}.}

# Tài liệu tham khảo
- [Modular arithmetic](https://en.wikipedia.org/wiki/Modular_arithmetic)
- [Modulo operation](https://en.wikipedia.org/wiki/Modulo_operation)
