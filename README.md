# My competitive coding setup

- I use C++11 (might switch to 17)
- Mingw-w64 for G++ (CLang for macOS when I'm using mac)
    - Installation for my architecture (windows 64 bit) here: [sourceforge.net](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/rubenvb/gcc-4.8-release/) 
- I use Git Bash's NeoVim (I know I'm weird) but the packages I use should still apply


## Vim
Here are all the packages I use for vim:
- vim-plug: for plugins
- vim-cpp-modern: C++ syntax highlighting
- coc.nvim: code autocompletion
- vim-airline: another package manager for themes
- vim-airline-themes: for themes
- theme: I use the "onehalf" light theme from vim-airline

### .vimrc
All the plugins for vim-plug should be in "~/.vimrc" if you're on Git Bash\
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
I use a small template file so I don't have to retype macros. I use this file for every single solution to problem sets. Modify it however you want to your preference.\
The debug wasn't made by me. Original source: [ncduy0303.github.io](https://ncduy0303.github.io/Competitive-Programming/Contest%20Template/main.cpp) 


### <bits/stdc++.h>
I use this header so I don't have to manually include header files. G++ doesn't automatically come with this header file, so here are some workarounds.\
**Mac**: [Github file](https://github.com/tekfyl/bits-stdc-.h-for-mac/blob/master/stdc%2B%2B.h). Create a folder in `/usr/local/include` called "bits", and then put the file in there named "stdc++.h"\
**Windows**: Go to this path: `/c/Program Files (x86)/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/bits` and then add the "stdc++.h" file in there from the link for mac above. 

## Scripts
Small scripts I made to help with coding.

To use the scripts everywhere, you can set it as a PATH variable by going to the "~" directory,\
then making a file called ".bashrc" (for Git Bash only), and then at the top of the file type:\
`PATH=$PATH:/c/path/to/the/competitive-coding/folder`. Then you can use crun or any scripts in this folder anywhere. ;D


### Crun
Basically I have a short script to compile and run automatically based
on what compiler flags USACO uses. Also I use C++11 but you can change that to C++17\
If you're on mac use `clang -o result.exe $1 -Wall -Wextra -O2 -std=c++11` instead so you can specify which version of C++ you want to use.

#### Running with Crun
On Linux and macOS do "chmod u+x crun" first inside the competitive-coding folder.\
Then just simply do `crun fileName.cpp` and it will automatically compile and run the program.\
Also, I've added it so you can just do `crun` and it will compile and run the previous program.\

In order to set this up, edit the crun file and change the `STASH_PATH` variable to the following path: `/c/path/to/the/competitive-coding/stash.txt`, so that it will store which program you ran last.

### CTime
I also have a small script to check how long the execution time took so you can see if your program fits within the 
time constraints.

#### Timing with CTime
On Linux and macOS do "chmod u+x ctime" first within the competitive-coding folder.
Then just simply do `ctime fileName.cpp` and it will show the compilation time and the execution time of the program.





Happy Coding! (more like head banging why is my code not working i hate my life coding :D)
