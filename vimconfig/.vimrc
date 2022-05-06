" "SETTINGS" {
	" "Software Settings" {
		" Desabilita compatibilidade com vi que pode causar problemas inesperados. Para habilitar use "compatible"
		set nocompatible

		" salva arquivos de backup. (Para salvar use "nobackup")
		set backup

		" Habilita detec��o de tipo de arquivo. Vim poder� tentar detectar o tipo do arquivo em uso.
		filetype on

		" Habilita e carrega plugins para os tipos de arquivos detectados.
		filetype plugin on

		" Carrega um arquivo de identa��o para os tipos de arquivos detectados.
		filetype indent on

		" Define os comandos que s�o salvos no hist�rico (o valor padr�o � 20).
		set history=20

		" "Search Settings" {
			" Ao pesquisar em um arquivo, realce os caracteres correspondentes � medida que voc� digita. Para desabilitar use "no" no inicio
			set incsearch

			" Mostra palavras compativeis com a pesquisa. Para desabilitar use "no" no inicio 
			set showmatch

			" Usa realce durante uma busca. Para desabilitar use "no" no inicio
			set nohlsearch
			
			" Ignora letras capital durante a busca.
			set noignorecase

			" Habilita a procura especifica por uma palavra e considera a letra capital. Essa op��o sobrep�e a configura��o ignorecase.
			set nosmartcase
		" }
	" }
	" "Interface Settings" {
		" Liga a syntax highlighting.
		syntax on
		syntax enable

		" Habilita guia de n�mero de linha.
		set number

		" Ilumina o fundo horizontal da linha onde se encontra o cursor.
		set cursorline

		" Ilumina o fundo vertical da coluna onde se encontra o cursor. para desabilitar, use "no" no inicio.
		set nocursorcolumn

		" Mostra parte do comando que voc� digita na ultima linha da tela.
		set showcmd

		" Mostra o modo do vim na �ltima linha.
		set showmode
		" "Highlight Settings" {
			"Altera estilo de realce do "CursorLine".
			highlight CursorLine term=bold cterm=bold guibg=DarkGrey
		" }
		" "Theme Settings" {
			packadd! dracula
			colorscheme dracula
		" }
	" }
	" "Editor Settings" {
		" Define o tamanho do tab para [n] colunas.
		set tabstop=4

		" Define o tamanho do shift para [n] espa�os.
		set shiftwidth=4

		" Usa o catactere de espa�os no lugar de tabs. Para desabilitar use "no" no inicio.
		set noexpandtab

		" N�o permite que o cursor role depois ou acima de N numeros de linhas enquanto est� rolando.
		set scrolloff=10

		" Desabilita a formata��o de quebra de linhas. Permite que a linha se extenda t�o longe quanto necess�rio.
		set nowrap

		" "Folder Settings" {

				" Define o metodo de folding como maker
				set foldmethod=marker

				" Define os caracteres de inicio e fim do folder
				set foldmarker={,}
		" }
	" }
	" "42Header Settings" {
		" 42 Header User and Email.
		let g:user42 = 'thfirmin'
		let g:mail42 = 'thiagofirmino2001@gmail.com'
	" }
"}
