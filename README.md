# Wiki hướng dẫn người mới cho diễn đàn DNH


Bài viết này được dịch có bổ sung và chỉnh sửa từ Wiki của subreddit [\r\learnprogramming](https://www.reddit.com/r/learnprogramming/wiki/index) bởi thành viên drgnz! Mọi đóng góp của các bạn luôn được hoan nghênh!


# Mục lục

- [Giới Thiệu](#intro)
- [Đặt câu hỏi như thế nào cho đúng?](#question)
  - [Quy định về giúp đỡ bài tập](#homework)
- [Hướng dẫn post code và markdown code](#markdown)
- [Trả lời câu hỏi như thế nào cho đúng?](#answer)
- [FAQ](#faq)
- [Tài liệu](#resource)
- [Công cụ lập trình](#tool)
- [Cộng đồng lập trình](#community)
- [Danh sách tham gia đóng góp DNH Wiki](#contributor)

<a name="intro"></a>
# Giới thiệu

Chào mừng tới [Dạy Nhau Học](https://daynhauhoc.com/) hay thường được gọi tắt là DNH,
Ở DNH, mọi người có thể đặt gần như toàn bộ các câu hỏi liên quan trực tiếp tới lập trình, đời sống của lập trình viên hay đến những chuyện trên trời dưới đất, tán gẫu, tâm sự linh tinh. Tuy nhiên ở DNH không chấp nhận những câu hỏi liên quan tới chính trị, tình dục, xúc phạm người khác. Để rõ hơn thì các bạn hãy xem [DNH Guideline](https://github.com/daynhauhoc/meta/blob/master/guidelines.md) được soạn sẵn. Ngoài ra, DNH cũng sẽ không chào đón những câu hỏi đã được giải đáp kỹ trong phần [FAQ](https://github.com/drgnz/DNHWiki/blob/master/faq.md) (Những câu hỏi hay hỏi). **Những topic vi phạm sẽ bị đóng topic và xóa khỏi diễn đàn nên mọi người hãy để ý và đặt câu hỏi cho đúng.**

<a name="question"></a>
# Đặt câu hỏi như thế nào cho đúng?

## Quy định nhỏ khi viết một bài viết:

- Xem phần [FAQ](https://github.com/drgnz/DNHWiki/blob/master/faq.md) xem có câu hỏi của mình chưa, và nếu rồi xem câu trả lời có đủ chưa. Nếu chưa, bạn có thể tạo topic mới và đưa ra cái **còn thiếu** trong phần [FAQ](https://github.com/drgnz/DNHWiki/blob/master/faq.md).
- Đảm bảo là tiêu đề của mình dễ hiểu cho mọi người. Một tựa đề hay cũng giúp bạn thu hút người khác giúp đỡ!
- Đảm bảo bài viết phải được chỉnh sửa sao cho dễ đọc, dễ nhìn. Và khuyên các bạn chỉnh sửa lại theo [Markdown](https://daynhauhoc.com/t/markdown-trong-daynhauhoc-com/11040) của DNH.
- Post code thay vì hình chụp để người giúp đỡ dễ copy code hơn. Và nếu được nên chĩ rõ sai dòng nào, đoạn code nào để người giúp đỡ có thể tiếp cận vấn đề nhanh hơn.
- Đánh dấu những câu trả lời hay hoặc những câu trả lời giúp bạn giải đáp thắc mắc để người khác có thể học hỏi.
- Nếu tự tìm ra lời giải, hãy post lời giải của mình vào và đánh dấu là đã giải được.
- Đặt catalog và tag cho từng bài viết để nhằm dễ phân loại
- Không dùng ngôn ngữ teen, tiếng việt không dấu hay những lời van xin cầu cứu như "Làm ơn", "Giúp em với", ...
- **Cố gắng tìm ra cách giải quyết vấn đề cần hỏi trước khi đặt câu hỏi**
- **Cung cấp thông tin cho bài viết càng nhiều càng tốt**

## Ví dụ:

Tiêu đề đúng:

![](http://i.imgur.com/RqKCXrI.png)

Tiêu đề sai:

![](http://i.imgur.com/z2aQl0w.png)

**Ngoài ra tuyệt đối không chép code rồi nhờ giải thích toàn bộ code, nhờ chỉnh sửa lỗi trong code lấy trên mạng, nhờ code giùm, nhờ làm bài giùm hoặc dẫn link từ một nơi khác rồi nhờ giúp đỡ. Những bài viết như kể trên sẽ bị close ngay lập tức!**

**TÌM KIẾM TRƯỚC KHI POST**, DNH không phải nơi giải đáp những câu hỏi đầy rẫy trên Google, Bing, Yahoo! Search, ... Vậy nên hãy đảm bảo rằng các bạn đã tìm kiếm trước khi đặt một câu hỏi hay lập một bài viết mới. Đơn giản bạn cứ nghĩ thế này, bạn không bỏ thời gian ra để chỉ tìm kiếm một câu trả lời cho bạn. Thì ai sẽ đủ thời gian trả lời sự lười biếng của bạn?

Trong trường hợp nếu câu hỏi của bạn dù tìm kiếm mà không ra giải đáp, hoặc đây là do bạn tự nghiên cứu ra. Thì trong bài viết hãy chỉ rõ ra những cái gì **bạn đã tìm được cũng như làm được, làm tới đâu và kẹt chỗ nào**. Nếu có dính liếu tới code thì nên đưa code lên cho mọi người dễ dàng đọc code và giúp đỡ. Có nhiều trường hợp nhờ giúp, nhưng code lại không được công khai ra thì các bạn có thể đưa mã giã ý tưởng phần nhỏ của dự án đang làm để mọi người dễ hình dung hơn.

Nói kỹ hơn về việc cung cấp thông tin cho bài viết. Để cho muốn được giải đáp nhanh, bạn nên cung cấp thông tin rõ cho người đọc. Cứ càng nhiều thông tin, thì người giúp đỡ sẽ dễ dàng tiếp cận câu hỏi của bạn và đưa ra câu trả lời nhanh chóng hơn. Sau đây là một vài gợi ý giúp bạn đưa ra thông tin hữu ích cho bài viết:

- Nếu câu hỏi là về lập trình
  1. Đề bài hoặc mục đích của đoạn code bạn đang hiện thực. Chức năng gì, input và output như thế nào.
  2. Bạn đang gặp vấn đề gì? Lỗi gì? Ghi rõ tên lỗi bạn biết được!
  3. Chương trình của bạn chạy sai so với đề yêu cầu như thế nào?
  4. Bạn đã làm được gì trong quá trình sửa lỗi?
- Nếu là một câu hỏi mang tính chất thảo luận:
  1. Đề tài thảo luận là gì?
  2. Những người khác nghĩ gì về đề tài này
  3. Suy nghĩ của bạn về đề tài này
- Nếu là một câu hỏi ngẫu nhiên:
  1. Nội dung chính của vấn đề bạn đang gặp (Làm sao hết ế, Làm sao pro như Bill Gates, ...)
  2. Thông tin cần giúp đỡ

<a name="homework"></a>
## Quy định về giúp đỡ bài tập

DNH sẽ và không bao giờ giúp các bạn **làm giúp** bài tập và nộp cho thầy cô trên trường. Tuy nhiên có những bài tập hay có thể xét vào những câu hỏi hay đáng học hỏi thì có thể cùng nhau thảo luận. Hay có nhiều bài tập đưa ra để cùng nhau giải quyết vấn đề thì những bài tập ấy sẽ được hoanh nghênh. Và khi post các bài liên quan tới bài tập, các bạn nên tuân theo những quy định nhỏ sau:

- Các post liên quan tới bài tập về nhà phải gắn tag homework và ngôn ngữ tương ứng
- Không hối thúc mọi người giúp đỡ, thảo luận về bài tập
- Không cần thiết phải post đầy đủ code của toàn bộ project lên. Chỉ post phần cần thiết! Nếu phần cần thiết liên quan toàn bộ project, thì nén toàn bộ project lại và up lên một host nào đó rồi chia sẻ. (Xem thêm hướng dẫn ở dưới)
- Không được mua bán code, hay code giùm trả tiền cũng như mua chuộc người khác để giải hộ
- Hãy nhiệt tình
- Mô tả chi tiết lỗi như phần **Cách đặt câu hỏi** đã hướng dẫn
- Đừng ngại mình yếu kém mà giấu đi những cái mình chưa biết.

## Đọc thêm:

- [Cách tìm kiếm trên DNH](https://daynhauhoc.com/t/cach-tim-kiem-tren-day-nhau-hoc/53)
- [Cách để có một bài viết hay và thu hút](https://daynhauhoc.com/t/lam-sao-de-cau-hoi-cua-minh-thu-hut-duoc-nhieu-views-va-mau-co-cau-tra-loi-tren-daynhauhoc/9704)
- [Hướng dẫn cơ bản khi tham gia DNH](https://daynhauhoc.com/t/welcome-to-day-nhau-hoc-doc-truoc-khi-post/11)

English:

- [How to ask the question the smart way](http://catb.org/~esr/faqs/smart-questions.html)
- [Writing the perfect question](http://codeblog.jonskeet.uk/2010/08/29/writing-the-perfect-question/)
- [How to ask a software question](http://en.wikipedia.org/wiki/Wikipedia:Reference_desk/How_to_ask_a_software_question)
- [How do I post a question about code that doesn't work correctly? (C++ oriented)](http://www.parashift.com/c++-faq-lite/how-to-post.html#faq-5.8)

<a name="markdown"></a>
# Hướng dẫn post code và markdown code

Khi đưa code lên DNH, tốt nhất nên đưa lên **một đoạn code nhỏ, bao bọc nội dung cần hỏi và chính xác** ([small, self-contained, correct example](http://sscce.org/)).

- Một đoạn code nhỏ là một đoạn code đủ nhỏ để mô tả hết vấn đề mình cần hỏi.
- Đoạn code đó nên chạy được dễ dàng, và nếu nó là một khối liền mạch thì nên bổ sung đoạn code đầy đủ.

Nếu làm như trên, thì các bạn chắc chắn sẽ nhận được sự giúp đỡ nhiệt tình nhiều hơn từ DNH. Và thậm chí nhiều khi, khi xác định được đoạn code có lỗi cần giúp đỡ, bạn có thể chợt nhận ra lỗi và tự giải quyết mà không cần trợ giúp nữa. :D

Tiếp tới cách chỉnh lại đinh dạng (format) code cho đẹp. Mình tham gia DNH cũng lâu, nhưng thấy các bạn rất ít chỉnh lại định dạng code. Nên khiến nhiều người đọc code, không hiểu các bạn đang biết gì vì nó rối quá. Trong DNH có hỗ trợ Markdown, giúp các bạn định dạng lại code vừa gọn gàng, mà vừa đẹp nữa. Từ đó ai cũng dễ đọc, dễ giúp đỡ hơn.

Cách dùng markdown rất đơn giản, các bạn chỉ cần bôi đen đoạn code và nhấn <kbd>Ctrl + Shift + C</kbd> là đoạn code sẽ được định dạng lại rất ngay thẳng! Hoặc bỏ 3 dấu \`\`\` vào đầu vào cuối đoạn code!


&#96;&#96;&#96;<br/>
code<br/>
&#96;&#96;&#96;


Tuy nhiên sẽ có vài trường hợp sau khi gặp, mặc dù markdown nhưng vẫn sẽ không được định dạng:

## TH1 - Đoạn văn bản và code dính liền nhau như dưới:
<br/>(Insert example picture here)</br>
```
đoạn văn bản ngẫu nhiên
code
```

Khi gặp TH này, các bạn thêm một dòng trống giữa đoạn văn bản và code là đoạn code sẽ được định dạng

![Vd1 - TH1](http://i.imgur.com/qnAlyPF.png)

Thành quả:

![VD2 - TH1](http://i.imgur.com/sYOFJIw.png)


## TH2 - Nhiều đoạn code dính liền nhau

Nhiều đoạn code dính liền nhau, thường gây ra sẽ định dạng lại thành 1 đoạn code duy nhất. Để sửa lỗi này, bạn chỉ cần chèn vào dòng enter hoặc tốt nhất là một dòng mô tả thêm file / tên đoạn code là sẽ giải quyết được :) VD:

![Ví dụ TH3](http://i.imgur.com/sOBH8na.png)


Nếu code bạn quá dài, mình khuyên các bạn nên sử dụng các website chia sẻ code trực tuyến. Các bạn có thể sử dụng tùy thích website nào cũng được, các bạn có thể tham khảo danh sách dưới đây:

- HTML, CSS, JS
  - [jsFiddle](https://jsfiddle.net/)
  - [Codepen](http://codepen.io/)
  - [Plnkr](https://plnkr.co/)
- SQL
  - [SQLFiddle](http://sqlfiddle.com/)
- PHP
  - [3v4l](https://3v4l.org/)
- Others
  - [repl.it](https://repl.it/languages)
  - [Codepad](http://codepad.org/)
  - [Ideone](http://ideone.com/)
  - [Rextester](http://rextester.com/)
  - [Pastebin](http://pastebin.com/)
  - [Gist](https://gist.github.com)

Còn đây là các host giúp chia sẻ file nhanh để cho các bạn có thể upload project lên share cho mọi người:

- [Wikisend](http://wikisend.com/)
- [Google Drive](https://drive.google.com/)

Vậy là ta xong phần markdown!
Các bạn có thể xem thêm bài viết khác của Admin: [Hướng dẫn post code markdown](https://daynhauhoc.com/t/cach-post-code-dung-markdown-trong-category-programming/112)

<a name="answer"></a>
# Trả lời câu hỏi như thế nào cho đúng?

Bạn không cần phải là một chuyên gia để trả lời các câu hỏi. Nếu bạn có thể giúp phần nào, thì cứ việc mạnh dạn ghi ra câu trả lời của mình. Tuy nhiên, dù sao cũng có vài quy tắc cần tuân theo:

- Nên dùng Tiếng Anh và Tiếng Việt vì phần lớn thành viên DNH rành 2 ngôn ngữ này.
- Viết Tiếng Việt **CÓ DẤU**, không dùng ngôn ngữ teen hay các ký hiệu không phổ biến, khó hiểu.
- Luôn lịch sự, không đả kích người khác, không đứng ngoài khiêu khích gây tranh cãi. (Xem thêm guideline ở trên có đề cập)
- Đọc kỹ câu hỏi trước khi trả lời. Có thể hỏi lại chủ topic nếu chưa hiểu kỹ câu hỏi.
- Nếu trả lời bằng code, đảm bảo code có thể chạy được. Và nên comment rõ ràng, chú thích code để tăng tính dễ hiểu
- Cố gắng **hướng dẫn người hỏi giải quyết vấn đề** hơn là **cung cấp lời giải** cho câu hỏi được hỏi một cách trực tiếp. Đặc biệt là các câu hỏi đơn giản, hoặc nhờ giải giùm bài tập, liên quan tới bài tập.
- Nên tìm trả lời một cách chính xác ngay từ đầu. Và nếu có sai, nên chỉnh sửa lại hoặc trả lời lại bằng một câu trả lời đúng.
- Giúp người hỏi sửa lại thông tin sai trong quá trình hỏi đáp cũng như giúp đỡ nhưng người tham gia khác.
- Nếu có đưa link về một bài viết nào đó. Nên đọc sơ qua bài viết ấy để xem có đáp ứng yêu cầu người hỏi không cũng như các câu trả lời có giải đáp được phần nào không. Tránh đưa link xấu, virus, không đủ thông tin và thông tin thiếu chính xác.
- Không được gắn Quảng cáo, MMO vào bất kỳ link nào!
- Luôn sẵn sàng trả lời những câu hỏi tiếp theo. Vì nhiều lúc có thể bạn hiểu, nhưng khi ghi câu trả lời ra thì có thể người khác đọc không hiểu. Ngoài ra có thể sẽ có những câu hỏi tiếp theo liên quan tới phần bạn trả lời. Nên đừng bỏ ngang topic khi người hỏi chưa xác nhận câu trả lời đúng / hiệu quả nhất.

Đọc thêm: [Answering Technical Questions Helpfully](http://codeblog.jonskeet.uk/2009/02/17/answering-technical-questions-helpfully/)


<a name="faq"></a>
# [FAQ](https://github.com/drgnz/DNHWiki/blob/master/faq.md)

Những câu hỏi phổ biến, hay được hỏi đều trong mục này!

<a name="resource"></a>
# [Tài liệu](https://github.com/drgnz/DNHWiki/blob/master/resource.md)

Tổng hợp các tài liệu lập trình từ cơ bản tới nâng cao được tổng hợp.

<a name="tool"></a>
# [Công cụ lập trình](https://github.com/drgnz/DNHWiki/blob/master/tools.md)

Tổng hợp những công cụ lập trình, quản lý source, ...

<a name="community"></a>
# Cộng đồng lập trình

- [Dạy Nhau Học](https://daynhauhoc.com/) - Hỏi đáp về lập trình
- [Tôi Đi Code Dạo](https://toidicodedao.com/) - Blog về lập trình
- [Reddit - Learnprogramming](https://www.reddit.com/r/learnprogramming/) - Cộng đồng reddit học lập trình
- [Reddit - Programming](https://www.reddit.com/r/programming/) - Cộng đồng Reddit về tin tức lập trình
- [StackOverflow](http://stackoverflow.com/) - Tương tự DNH nhưng Tiếng Anh
- [Kipalog](https://kipalog.com/) - Tổng hợp các blog về lập trình
- [Medium](https://medium.com/) - Nhiều bài viết hay về lập trình
- [Hacker News](https://news.ycombinator.com) - Cập nhật tin tức hằng ngày

<a name="contributor"></a>
# Danh sách thành viên tham gia:

@drgnz
