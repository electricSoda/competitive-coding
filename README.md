# My competitive coding setup

- I use C++11 (might switch to 17)
- Mingw-w64 for G++ (CLang for macOS when I'm using mac)
- I use Git Bash's vim (I know I'm weird) but the packages I use should still apply
  - I'm pretty sure Git Bash uses NeoVim


## Vim
Here are all the packages I use for vim:
- vim-plug: for plugins
- vim-cpp-modern: C++ syntax highlighting
- coc.nvim: code autocompletion
- vim-airline: another package manager for themes
- vim-airline-themes: for themes
- theme: I use the "onehalf" light theme from vim-airline

### .vimrc
All the plugins for vim-plug should be in "~/.vimrc" if you're on Git Bash 
Also for the theme I do:

    set nu
    syntax on
    set tabstop=8 softtabstop=0 expandtab shiftwidth=4 smarttab
    
    set t_Co=256
    set cursorline
    colorscheme onehalflight
    let g:airline_theme='onehalfdark'

And I also have 
`inoremap {<CR> {<CR>}<ESC>O `
so that vim auto closes brackets.


### TEMPLATE.cpp
I use a small template file so I don't have to retype macros. I use this file for every single solution to problem sets. Modify it however you want to your preference. The `de()` function is used  to debug and pretty print things in the console. It is overloaded to support multiple variables, arrays, vectors, and maps so far.

### <bits/stdc++.h>
I use this header so I don't have to manually include header files. G++ doesn't automatically come with this header file, so here are some workarounds.
**Mac**: [Github file](https://github.com/tekfyl/bits-stdc-.h-for-mac/blob/master/stdc%2B%2B.h). Create a folder in `/usr/local/include` called "bits", and then put the file in there named "stdc++.h"
**Windows**: IDK man just search it up.

## Scripts
Small scripts I made to help with coding.
### Crun
Basically I have a short script to compile and run automatically based
on what compiler flags USACO uses. Also I use C++11 but you can change that to C++17
If you're on mac use `clang -o result.exe $1 -Wall -Wextra -O2 -std=c++11` instead so you can specify which version of C++ you want to use.

#### Running with Crun
On Linux and macOS do "chmod u+x crun" first.
Then just simply do `./crun fileName.cpp` and it will automatically compile and run the program.
If you don't want to have to paste the crun script everywhere, you can set it as a PATH variable by going to the "~" directory,
then making a file called ".bashrc" (for Git Bash only), and then at the top of the file type:
`PATH=$PATH:/c/path/to/the/competitive-coding/folder`. Then you can use crun anywhere. ;D

### Time
I also have a small script to check how long the execution time took so you can see if your program fits within the 
time constraints.

#### Timing with Time
On Linux and macOS do "chmod u+x time" first.
Then just simply do `./time fileName.cpp` and it will show the compilation time and the execution time of the program.





Happy Coding! (more like head banging why is my code not working i hate my life coding :D)
