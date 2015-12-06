" **************************************************************************** "
"                                                                              "
"                                                         :::      ::::::::    "
"    .myvimrc                                           :+:      :+:    :+:    "
"                                                     +:+ +:+         +:+      "
"    By: mdubray <marvin@42.fr>                     +#+  +:+       +#+         "
"                                                 +#+#+#+#+#+   +#+            "
"    Created: 2015/06/18 22:00:28 by mdubray           #+#    #+#              "
"    Updated: 2015/12/06 01:12:47 by cali             ###   ########.fr        "
"                                                                              "
" **************************************************************************** "

set nocompatible " be iMproved
"filetype off " required!

syntax on
set number
set mouse=a
set cursorline
"set cursorcolumn

set t_vb=
set visualbell

set encoding=utf-8
set fileencoding=utf-8

"set noet ci pi sts=0 sw=4 ts=4
"set autoindent
set cindent
set backspace=indent,eol,start

inoremap ( ()<left>
inoremap { {}<left>
inoremap [ []<left>

augroup VIMRC
	autocmd!
	autocmd bufEnter,WinEnter * call matchadd('Error','\s\+$', -1)
augroup END

highlight ExtraWhitespace ctermbg=red guibg=red
autocmd BufWinEnter * match ExtraWhitespace /\s\+$/
autocmd InsertEnter * match ExtraWhitespace /\s\+\%#\@<!$/
autocmd InsertEnter * match ExtraWhitespace / \{2,}/
autocmd InsertLeave * match ExtraWhitespace /\s\+$/
autocmd InsertLeave * match ExtraWhitespace /\s\+\%#\@<!$/
autocmd InsertLeave * match ExtraWhitespace / \{2,}/
autocmd BufWinLeave * call clearmatches()

"set cc=80
set ruler
map <C-c-h> :Std <Return>

set backupdir=~/.vim/
set directory=~/.vim/


let s:asciiart = [
			\"        :::      ::::::::",
			\"      :+:      :+:    :+:",
			\"    +:+ +:+         +:+  ",
			\"  +#+  +:+       +#+     ",
			\"+#+#+#+#+#+   +#+        ",
			\"     #+#    #+#          ",
			\"    ###   ########.fr    "
			\]

let s:styles = [
			\{
			\'extensions': ['c', 'h', 'cc', 'hh', 'cpp', 'hpp'],
			\'start': '/*', 'end': '*/', 'fill': '*'
			\},
			\{
			\'extensions': ['vim', 'myvimrc', 'vimrc'],
			\'start': '"', 'end': '"', 'fill': '*'
			\},
			\{
			\'extensions': ['el', 'emacs', 'myemacs'],
			\'start': ';', 'end': ';', 'fill': '*'
			\}
			\]


let s:maxlen = 80
let s:margin = 5
let s:contentmiddle = s:maxlen - (3 * s:margin - 1) - strlen(s:asciiart[0])

" ========== GET LOGIN =========== "
function s:getLogin ()
	let l:login = strpart($USER, 0, 9)
	if (strlen(l:login) == 0)
		let l:login = "mdubray"
	endif
	return l:login
endfunction

" ========== GET MAIL =========== "
function s:getMail ()
	let l:mail = strpart($MAIL, 0, s:contentmiddle - 16) " -16 for the By : && space at the end
	if (strlen(l:mail) == 0)
		let l:mail = "mdubray@student.42.fr"			" manage error if mail is not defined
	endif
	return l:mail
endfunction


" ========== CREATE FILL LINES =========== "
function s:midgap ()
	return repeat(' ', s:margin - 1)
endfunction

function s:left ()
	return s:start . repeat(' ', s:margin - strlen(s:start))
endfunction

function s:right ()
	return repeat(' ', s:margin - strlen(s:end)) . s:end
endfunction

" ========== CREATE CONTENT LINES =========== "
function s:fileline ()
	let l:trimfile = strpart(fnamemodify(bufname('%'), ':t'), 0, s:contentmiddle)
	return s:left() . l:trimfile . repeat(' ', s:contentmiddle - strlen(l:trimfile)) . s:midgap() . s:asciiart[1] . s:right()
endfunction

function s:coderline ()
	let l:contentline = "By: ". s:getLogin () . ' <' . s:getMail () . '>'
	return s:left() . l:contentline . repeat(' ', s:contentmiddle - strlen(l:contentline)) . s:midgap() . s:asciiart[3] . s:right()
endfunction

function s:createline ()
	let l:date = strftime("%Y/%m/%d %H:%M:%S")
	let l:line = "Created: " . l:date . " by " . s:getLogin ()
	return s:left() . l:line . repeat(' ', s:contentmiddle - strlen(l:line)) . s:midgap() . s:asciiart[5] . s:right()
endfunction

function s:updateline ()
	let l:date = strftime("%Y/%m/%d %H:%M:%S")
	let l:line = "Updated: " . l:date . " by " . s:getLogin ()
	return s:left() . l:line . repeat(' ', s:contentmiddle - strlen(l:line)) . s:midgap() . s:asciiart[6] . s:right()
endfunction


" ========== GET FILE EXTENSION =========== "
function s:filetype()
	" default values if you open vim without filename
	let s:start = '#'
	let s:end = '#'
	let s:fill = '*'

	"let extension = fnamemodify(bufname("%"), ':e') " more powerfull
	let l:extension = expand("%:e")

	for l:style in s:styles
		for l:ext in l:style['extensions']
			if l:extension == l:ext
				let s:start = l:style['start']
				let s:end = l:style['end']
				let s:fill = l:style['fill']
			endif
		endfor
	endfor

	"if (extension == "c")
	"	let s:start = '/*'
	"	let s:end = '*/'
	"	let s:fill = '*'
	"endif
endfunction

" ========== CREATE HEADER =========== "
function s:insert ()
	call s:filetype ()

	"== check there is not a well formatted header before =="
	" = biglines
	" = empty lines
	" = content lines
	" = logo lines

	if (getline(1) == s:start . ' ' . repeat(s:fill, s:maxlen - 2 - strlen(s:start) - strlen(s:end)) . ' ' . s:end && getline(11) == s:start . ' ' . repeat(s:fill, s:maxlen - 2 - strlen(s:start) - strlen(s:end)) . ' ' . s:end)
		if (getline(2) == s:start . repeat(' ', s:maxlen - strlen(s:start) - strlen(s:end)) . s:end && getline(10) == s:start . repeat(' ', s:maxlen - strlen(s:start) - strlen(s:end)) . s:end)
			if (getline(4) == s:fileline() && getline(6) == s:coderline())
				if (getline(3) == s:left() . repeat(' ', s:contentmiddle) . s:midgap() .s:asciiart[0] . s:right() && getline(5) == s:left() . repeat(' ', s:contentmiddle) . s:midgap() .s:asciiart[2] . s:right() && getline(7) == s:left() . repeat(' ', s:contentmiddle) . s:midgap() .s:asciiart[4] . s:right())
					if (strlen(getline(8)) == s:maxlen && strlen(getline(9)) == s:maxlen)
						return
					endif
				endif
			endif
		endif
	endif

	" else
	call append(0, "")
	call append(0, s:start . ' ' . repeat(s:fill, s:maxlen - 2 - strlen(s:start) - strlen(s:end)) . ' ' . s:end)	" # ==== #
	call append(0, s:start . repeat(' ', s:maxlen - strlen(s:start) - strlen(s:end)) . s:end)						" #      #
	call append (0, s:updateline())
	call append (0, s:createline())
	call append (0, s:left() . repeat(' ', s:contentmiddle) . s:midgap() .s:asciiart[4] . s:right())				" #   :: #
	call append (0, s:coderline())
	call append (0, s:left() . repeat(' ', s:contentmiddle) . s:midgap() .s:asciiart[2] . s:right())				" #    + #
	call append (0, s:fileline())
	call append (0, s:left() . repeat(' ', s:contentmiddle) . s:midgap() .s:asciiart[0] . s:right())				" #   ## #
	call append(0, s:start . repeat(' ', s:maxlen - strlen(s:start) - strlen(s:end)) . s:end)						" #      #
	call append(0, s:start . ' ' . repeat(s:fill, s:maxlen - 2 - strlen(s:start) - strlen(s:end)) . ' ' . s:end)	" # ==== #

endfunction

" ========== UPDATE HEADER =========== "
function s:update ()
	call s:filetype ()

	let l:pattern = s:start . repeat(' ', 5 - strlen(s:start)) . "Updated: [0-9]"
	let l:line = getline (9)

	if l:line =~ l:pattern
		call setline(9, s:updateline())
	endif
endfunction


" Map function
command Myheader call s:insert()
nmap <C-c-h> :Myheader <CR>
autocmd BufWritePre * call s:updateline()
