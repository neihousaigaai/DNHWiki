Tiếp tục phần giới thiệu về modulo, mình sẽ giới thiệu về Euler's totient function (viết tắt là ETF, còn gọi là phi hàm Euler).

# Định nghĩa
- Với 1 số nguyên dương n, ta định nghĩa một số `φ(n)` (phi) qua công thức tích
<img src="https://latex.codecogs.com/gif.latex?\varphi(n)=\prod_{p|n}\left(1-\frac{1}{p}\right)" title="\varphi(n)=\prod_{p|n}\left(1-\frac{1}{p}\right)" />

với p nguyên tố, `p | n` có nghĩa là các ước nguyên tố của n.
Tích này chỉ xét với các ước nguyên tố **khác nhau** của n.
- Giá trị `φ(n)` chính là số số nguyên dương không quá n mà nguyên tố cùng nhau với n, hay `φ(n)` chính là số lượng các số a mà
<img src="https://latex.codecogs.com/gif.latex?\left\{\begin{matrix}&space;0<a\leqslant&space;n&space;\\gcd(a,n)=1&space;\end{matrix}\right." title="\left\{\begin{matrix} 0<a\leqslant n \\gcd(a,n)=1 \end{matrix}\right." />

# Tính chất
- `gcd(m, n) = 1 -> φ(m * n) = φ(m) * φ(n)`
- Nếu p nguyên tố và k > 0, ta có
<img src="https://latex.codecogs.com/gif.latex?\varphi(p^k)=p^k-p^{k-1}=p^{k-1}(p-1)=p^k\left(1-\frac{1}{p}\right)" title="\varphi(p^k)=p^k-p^{k-1}=p^{k-1}(p-1)=p^k\left(1-\frac{1}{p}\right)" />

# Chứng minh công thức tích
- Trường hợp `n = 1` không xét. Ta chỉ xét `n >= 2`.
- Giả sử n phân tích được thành dạng
<img src="https://latex.codecogs.com/gif.latex?n&space;=&space;p_1^{k_1}\cdots&space;p_m^{k_m}" title="n = p_1^{k_1}\cdots p_m^{k_m}" />

với <img src="https://latex.codecogs.com/gif.latex?p_1<p_2<\cdots<p_m" title="p_1<p_2<\cdots<p_m" /> là các số nguyên tố và <img src="https://latex.codecogs.com/gif.latex?k_i>0" title="k_i>0" />

Áp dụng các tính chất trên, biển đổi

<img src="https://latex.codecogs.com/gif.latex?\varphi(n)=\varphi(p_1^{k_1})\varphi(p_2^{k_2})\cdots\varphi(p_m^{k_m})" title="\varphi(n)=\varphi(p_1^{k_1})\varphi(p_2^{k_2})\cdots\varphi(p_m^{k_m})" />
<img src="https://latex.codecogs.com/gif.latex?\varphi(n)=p_1^{k_1}\left(1-\frac{1}{p_1}\right)p_2^{k_2}\left(1-\frac{1}{p_2}\right)\cdots&space;p_m^{k_m}\left(1-\frac{1}{p_m}\right)" title="\varphi(n)=p_1^{k_1}\left(1-\frac{1}{p_1}\right)p_2^{k_2}\left(1-\frac{1}{p_2}\right)\cdots p_m^{k_m}\left(1-\frac{1}{p_m}\right)" />
<img src="https://latex.codecogs.com/gif.latex?\varphi(n)=n\left(1-\frac{1}{p_1}\right)\left(1-\frac{1}{p_2}\right)\cdots&space;\left(1-\frac{1}{p_m}\right)" title="\varphi(n)=n\left(1-\frac{1}{p_1}\right)\left(1-\frac{1}{p_2}\right)\cdots \left(1-\frac{1}{p_m}\right)" />

# Cài đặt thử
[ETF - spoj](http://vn.spoj.com/problems/ETF/)

# Tài liệu tham khảo
[ETF](https://en.wikipedia.org/wiki/Euler%27s_totient_function)
