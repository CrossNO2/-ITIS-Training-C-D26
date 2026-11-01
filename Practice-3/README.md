# Practice 3

## Quy tắc chung

Các bài dùng C thuần, `int main()`, `scanf` và `printf`. Practice 3 cho phép dùng mảng một chiều, mảng cộng dồn, mảng tần suất, mảng đánh dấu và hàm con. Bài G và L tự cài đặt cách sắp xếp, không dùng `qsort`.

## Bài A: Tìm phần tử nhỏ nhất

`n` lưu số lượng phần tử; `values` lưu dãy số; `minimum` là giá trị nhỏ nhất; `index` là vị trí đang xét.

## Bài B: Chẵn lẻ

`n` lưu số lượng phần tử; `values` lưu dãy số; `value` là phần tử hiện tại cần kiểm tra chẵn hay lẻ.

## Bài C: Kinh doanh

`n` lưu số ngày; `current` là số tiền ngày hiện tại; `previous` là số tiền ngày trước; `currentLength` là độ dài đoạn không giảm hiện tại; `bestLength` là độ dài lớn nhất.

## Bài D: Peak Element

`n` lưu số phần tử; `values` lưu mảng; `i` là vị trí đang kiểm tra; phần tử được in nếu không nhỏ hơn các hàng xóm.

## Bài E: Mảng đối xứng

`n` lưu độ dài mảng; `values` lưu mảng; `left` và `right` là hai đầu đang so sánh; `symmetric` cho biết mảng còn đối xứng hay không.

## Bài F: Chèn mảng

`n` và `m` là kích thước hai mảng; `x` là vị trí chèn; `a` là mảng kết quả; `b` là mảng được chèn.

## Bài G: Sắp xếp

`n` là số phần tử; `values` là mảng cần sắp xếp; `i`, `j` là hai vị trí dùng trong hàm `sortArray`; `temporary` lưu tạm khi đổi chỗ.

## Bài H: Số Fibonacci

`testCases` là số bộ test; `number` là số cần kiểm tra; `first`, `second`, `next` là ba số liên tiếp trong quá trình sinh Fibonacci.

## Bài I: Xoay dãy số

`n` là độ dài dãy; `k` là số lần xoay trái; `values` là dãy ban đầu.

## Bài J: Số lần xuất hiện

`n` là số phần tử; `numbers` lưu thứ tự xuất hiện ban đầu; `values` là mảng tần suất; `number` là giá trị đang xử lý.

## Bài K: Nhật làm IT Helpdesk

`n` là số IP đã cấp; `used` là mảng đánh dấu các IP đã xuất hiện; `value` là IP đang đọc và cũng là IP nhỏ nhất đang tìm.

## Bài L: Hoàn đi intern

`n` là số phần tử; `frequency` là mảng tần suất; `value` là giá trị đang đọc. Duyệt tần suất giúp sắp xếp nhanh mà không dùng `qsort`.

## Bài M: Cặp phần tử bằng nhau

`n` là số phần tử; `frequency` lưu số lần mỗi giá trị đã gặp; `pairs` lưu số cặp bằng nhau.

## Bài N: Tổng liên tiếp

`n` là số phần tử; `queries` là số truy vấn; `prefix` là mảng cộng dồn; `left`, `right` là hai đầu đoạn cần tính tổng.

## Bài O: K lần biến đổi

`n` là kích thước mảng; `k` là số lần biến đổi; `values` là mảng; `maximum` là giá trị lớn nhất; `minimum` là giá trị nhỏ nhất.

## Bài P: Stock Maximize

`testCases` là số bộ test; `n` là số ngày; `previous` và `current` là giá hai ngày liên tiếp; `profit` là lợi nhuận lớn nhất.

## Bài Q: Diện tích lớn nhất

`n` là số bức tường; `heights` lưu chiều cao; `left`, `right` là hai bức tường đang xét; `best` là diện tích lớn nhất.

## Bài R: Tam giác kỳ diệu

`testCases` là số bộ test; `n` là số que; `values` lưu các giá trị `a`; `answer` là số cách chọn ba que tạo thành tam giác; `left`, `right` dùng để đếm nhanh sau khi sắp xếp.
