# Algorithm And Data Structure

Kho lưu trữ các **template thuật toán**, **ghi chú cấu trúc dữ liệu** và **bài tập luyện tập** (chủ yếu C++) theo hướng dễ học, dễ tìm và dễ tái sử dụng.

## Cấu trúc dự án (đã tổ chức lại)

```text
.
├── docs/
│   └── Algorithm/
│       ├── CTDL/                # Ghi chú lý thuyết (Set, Multiset, Unordered Set...)
│       └── Another/             # Hình ảnh minh hoạ
├── src/
│   ├── algorithm_template/      # Template thuật toán theo chủ đề
│   │   ├── bitmask/
│   │   └── math/
│   ├── datastructure_template/  # Template cấu trúc dữ liệu
│   └── exercise_online/         # Bài giải theo nền tảng (Codeforces, CSES, AtCoder...)
└── README.md
```

## Nội dung chính

### 1) `src/algorithm_template`
- `math/`: gcd/lcm, divisor, harmonic,...
- `bitmask/`: kỹ thuật bitmask và sinh tổ hợp.

### 2) `src/datastructure_template`
- `prefix_sum.cpp`: template xử lý prefix sum.

### 3) `src/exercise_online`
- Lời giải các bài luyện tập từ nhiều nền tảng:
  - Codeforces
  - CSES
  - AtCoder
  - CodeChef
  - CSAcademy

### 4) `docs/Algorithm`
- Ghi chú lý thuyết, hình ảnh minh hoạ phục vụ học tập.

## Quy ước và định hướng

- Mỗi file `.cpp` nên đặt theo tên bài/toàn bộ ý nghĩa của thuật toán.
- Ưu tiên code ngắn gọn, rõ ràng, dễ copy để dùng lại khi thi/luyện tập.
- Không commit file thực thi (`.exe`) để repository gọn và sạch lịch sử.

## Gợi ý sử dụng

- Dùng `src/algorithm_template` làm “sổ tay nhanh” trước khi giải bài mới.
- Đọc `docs/Algorithm/CTDL` khi cần ôn lại lý thuyết.
- Tham khảo `src/exercise_online` để xem cách áp dụng template vào từng bài cụ thể.

## Đóng góp

Bạn có thể mở PR để:
- Thêm template mới
- Tối ưu lời giải hiện có
- Bổ sung ghi chú giải thích hoặc test case mẫu

---

Nếu bạn muốn, mình có thể tiếp tục chuẩn hoá tên file (snake_case, bỏ khoảng trắng) và thêm script build/test tự động cho toàn bộ thư mục `src/exercise_online`.
