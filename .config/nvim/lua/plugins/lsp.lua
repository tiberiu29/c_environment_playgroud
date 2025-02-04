return {

    {
        "neovim/nvim-lspconfig",
    },

    {
        "williamboman/mason.nvim",
        optional = true,
        opts = { ensure_installed = { "codelldb" } },
        config = function()
            require("mason").setup()
        end,
    },
    {
        "williamboman/mason-lspconfig.nvim",
        dependencies = { "williamboman/mason.nvim" },
        config = function()
            require("mason-lspconfig").setup()
            vim.keymap.set('n', 'K', vim.lsp.buf.hover, {})
            vim.keymap.set('n', 'gd', vim.lsp.buf.declaration, {})
            vim.keymap.set('n', 'gD', vim.lsp.buf.definition, {})
            vim.keymap.set('n', 'gr', vim.lsp.buf.references, {})
            vim.keymap.set('n', '<Leader>rn', vim.lsp.buf.rename, {})
            vim.keymap.set({'n', 'v'}, '<Leader>ca', vim.lsp.buf.code_action, {})

            require("mason-lspconfig").setup_handlers({
                function(server_name)
                    require("lspconfig")[server_name].setup({})
                end,
            })
        end,
    },
}
