

Commands to use for running:

1. docker build -t development_c_env .
2. docker run -v ${PWD}:/development -it development_c_env  /bin/bash

--------------------------------------------------------------------

C notes for self:

"objdump -t *.o" = show the symbol table of an object file. Quite useful to check when you have unlinked object files

"objdump -d *.o" = converts machine code to assembly and displays


--------------------------------------------------------------------

GIT notes to self:

" git config --global core.editor "vim" " = set VIM as default edit for rebase/ammends etc

"git log --oneline" = nice formatted way to show history 
"git commit --amend --no-edit" = ammends without changing message
"git rebase -i HEAD~n" = operate on the last n commits

--------------------------------------------------------------------
TMUX notes for self:

"tmux new -s sessionName" = create new session with name sessionName

"tmux ls" = list all session

"ctrl + b + d" = detach session

"tmux a" = attach back to session

"tmux ls" = list sessions

"tmux a -t sessionId" = attach to a specific target via ID (id can be seen in tmux ls)

"tmux kill-session -t sessionId" = kill a target session via sessionId



-- creating PANES 
"ctrl + b + %" = create new pane in current session's window on right (horizontal/hotdog style)
"ctrl + b + " " = create new pane in current session's window on bottom (vertical/hamburger style)
"ctrl + b + q" = shows indexes of each pane
"ctrl + b + alt + 1/2/3/4/5" = creates a predefined pane structure (1/2/3/4/5 each is different)

-- creating WINDOWS
"ctrl + b + c" = create new window
"ctrl + b + n" = move throw windows sequentially back and forth
"ctrl + b + ," = rename window

-- NAVIGATION over sessions+windows wihth preview 
"ctrl + b + w" = it shows all sessions and all windows (can kill sessions/windows with ctrl + b + x)

-- kill pane
"ctrl + b + x" 

-- kill window
"ctrl + b + &"


--------------------------------------------------------------------
