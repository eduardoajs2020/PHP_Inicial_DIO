'\\ Executando um Aplicativo. esse script faz executar um aplicativo (cmd, bat, exe, com)'
'\\ Um exemplo : esse script executara o windows explorer.'

set Shell = CreateObject("WScript.Shell") 'Criar o Objeto

mb = msgbox("Veja um exemplo :", 0 + 64 , "Exemplo de executar um aplicativo")

Shell.Exec("cmd /c start cmd") 'Executa o aplicativo

mb = msgbox("O aplicativo que foi executado o foi Prompt de Comando. use 'Shell.Run', para abrir arquivo n�o win32.")

'\\ Script criador por Vitor Vilela da Cruz							\\'
'\\ Para mais informa��es, meu email: vitor.vilela.mario@gmail.com				\\'
'\\ Tomarem que gostem, por que � a coisa mais incrivel : Executar um aplicativo no navegador!	\\'
'\\ Dica : � possivel fazer isso na Java Script.						\\'