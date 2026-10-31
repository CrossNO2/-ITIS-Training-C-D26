# Practice-1

This directory contains `A.cpp` through `R.cpp`. Each file is a `.cpp` file containing C-style code only and follows the required five-header order, `main()` entry point, and footer.

`E.cpp` implements the recovered statement for “Đền bù cúm gia cầm”. For input `a b c m n k`, it outputs `m*a + k*b + (n-m-k)*c`, where the three terms are the compensation for type 1, type 2, and type 3 chickens. The official statement does not display numeric input constraints, so the implementation uses `long long` for all inputs and the total; it assumes the valid statement relationship `0 <= m + k <= n`.

All files were audited for C++-only syntax, STL usage, the forbidden `if (!scanf(...)) return 0;` pattern, and the required template. The implementable files compile as C with `gcc -x c`; local sample and edge checks were run for the recovered implementations. These checks are not Codeforces submissions and do not establish AC status. O and P–R still require their official statements for semantic certification.

The repository is currently at commit `90350a4` (`Complete Training C D26 Practice 1 audit`). `.build/` contains untracked generated executables and was left untouched; no force-push or overwrite was performed.
