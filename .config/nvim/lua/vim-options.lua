vim.opt.number=true;
vim.opt.relativenumber=true;

vim.opt.splitbelow=true;
vim.opt.splitright=true;

vim.opt.wrap=false;

vim.opt.expandtab=true;
vim.opt.tabstop=4;
vim.opt.shiftwidth=4;

vim.opt.clipboard="unnamedplus";

vim.opt.scrolloff=999;

vim.opt.virtualedit="block";

vim.opt.inccommand="split"

vim.opt.ignorecase=true;

vim.opt.termguicolors=true;


vim.g.mapleader=" ";


vim.keymap.set('n', '[d', vim.diagnostic.goto_prev, {desc = 'Go to prev diagnostic'});
vim.keymap.set('n', ']d', vim.diagnostic.goto_next, {desc = 'Go to next diagnostic'});
vim.keymap.set('n', '<leader>e', vim.diagnostic.open_float, {desc = 'Show Diagnostic [Error]'});
vim.keymap.set('n', '<leader>q', vim.diagnostic.setloclist, {desc = 'Show Diagnostic [Quick]-Fix'});


vim.api.nvim_create_autocmd('TextYankPost', {
    desc = 'Highlight when yanking',
    group = vim.api.nvim_create_augroup('kickstart-highlight-yank', {clear = true}),
    callback = function()
        vim.highlight.on_yank()
    end,
})
