return {
 {
        "nvim-lua/plenary.nvim",
    },

    {

        "nvim-tree/nvim-web-devicons",
    },

    {

        "MunifTanjim/nui.nvim",
    },

    {
        "nvim-neo-tree/neo-tree.nvim",

        config = function()
            vim.keymap.set('n', '<Leader>n', ':Neotree filesystem reveal left toggle=true<CR>', {})
        end,

        branch = "v3.x",
        requires = {
            "nvim-lua/plenary.nvim",
            "nvim-tree/nvim-web-devicons",
            "MunifTanjim/nui.nvim",
        }
    },

}
