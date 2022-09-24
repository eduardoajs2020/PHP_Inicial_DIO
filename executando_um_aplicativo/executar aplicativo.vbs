'\\ Executando um Aplicativo. esse script faz executar um aplicativo (cmd, bat, exe, com)'
'\\ Um exemplo : esse script executara o windows explorer.'

set Shell = CreateObject("WScript.Shell") 'Criar o Objeto

mb = msgbox("Veja um exemplo :", 0 + 64 , "Exemplo de executar um aplicativo")

Shell.Exec("cmd /c start cmd") 'Executa o aplicativo

mb = msgbox("O aplicativo que foi executado o foi Prompt de Comando. use 'Shell.Run', para abrir arquivo não win32.")

'\\ Script criador por Vitor Vilela da Cruz							\\'
'\\ Para mais informações, meu email: vitor.vilela.mario@gmail.com				\\'
'\\ Tomarem que gostem, por que é a coisa mais incrivel : Executar um aplicativo no navegador!	\\'
'\\ Dica : é possivel fazer isso na Java Script.						\\'