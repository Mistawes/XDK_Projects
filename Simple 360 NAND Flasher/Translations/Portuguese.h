#ifndef __PORTUGUUESE_TRANSLATION
#define __PORTUGUUESE_TRANSLATION
 
#define TRANSLATION_BY "Traduzido por SpkLeader\n\n" // Translate if you want, otherwise comment this line
 
#define MSG_SIMPLEFLASHER_CMD_FOUND_ENTERING_AUTO "game:\\simpleflasher.cmd encontrado!\n * Alternando para o modo automático!\n"
 
 
#define MSG_GETTING_NAND_SIZE "Obtendo o tamanho da NAND...\n"
#define MSG_SIZE " * Tamanho: 0x%X (%s)\n"
 
#define MSG_ERROR "\n ! ERRO: "
 
#define MSG_ERROR_READING_BYTES "\rErro lendo 0x%X bytes no endereço 0x%X (leu: 0x%X bytes)!\n"
#define MSG_ERROR_WRITING_BYTES "\rErro gravando 0x%X bytes no endereço 0x%X (gravou: 0x%X bytes)!\n"
#define MSG_ERROR_FAILED_TO_READ_BYTES_FROM_FILE "\rERRO: Falha ao ler %d bytes do arquivo\n\n"
#define MSG_ERROR_FAILED_TO_WRITE_BYTES_TO_FILE "\rERRO: Falha ao gravar %d bytes para o arquivo\n\n"
 
#define MSG_ERROR_INVALID_FILE_SIZE "Erro: %s - %d não é o tamanho válido de uma imagem!\n"
#define MSG_ERROR_SIZE_NOT_SUPPORTED "Erro: Não há suporte para o tamanho de %d bytes!\n"
 
#define MSG_FILE_NOT_FOUND "Arquivo %s não encontrado\n"
 
#define MSG_UNABLE_TO_MOUNT_FLASH "Impossível montar Flash:!"
#define MSG_UNABLE_TO_OPEN_FLASH_FOR_READING "Impossível abrir Flash: para leitura\n"
#define MSG_UNABLE_TO_OPEN_FLASH_FOR_WRITING "Impossível abrir Flash: para gravação\n"
#define MSG_UNABLE_TO_OPEN_FOR_WRITING "Impossível abrir %s para gravação\n"
#define MSG_UNABLE_TO_OPEN_FOR_READING "Impossível abrir %s para leitura, erro: 0x%X\n"
#define MSG_UNABLE_TO_GET_SIZE_OF_FLASH "Impossível determinar o tamanho da memória Flash!\n"
#define MSG_UNABLE_TO_WRITE_BYTES_TO_FLASH "Impossível gravar 0x%X bytes na memória Flash!, ERRO: 0x%X Endereço: 0x%X"
#define MSG_UNABLE_TO_READ_FROM "Impossível ler 0x%X bytes de %s (Leu: 0x%X bytes)\n"
#define MSG_UNABLE_TO_ALLOCATE_BUFFER_FOR "Impossível alocar 0x%X bytes de buffer para %s\n"
#define MSG_UNABLE_TO_ALLOCATE_BUFFER "Impossível alocar 0x%X bytes para o buffer!\n"
#define MSG_UNABLE_TO_READ_0X630_BYTES_FROM "Impossível ler 0x630 bytes de %s!\n"
 
#define MSG_PROCESSING_BLOCK "\rProcessando bloco 0x%X de 0x%X (%3.2f %%)"
#define MSG_PROCESSED_OF_BYTES "\rProcessados 0x%X de 0x%X bytes (%3.2f %%)"
#define MSG_PROCESSING_START "\rProcessando bloco"
#define MSG_PROCESSED_START "\rProcessado"
 
#define MSG_DONE_SUCCESS_DUMPED_BYTES "\nFeito! 0x%X bytes dumpados com sucesso para %s\n"
#define MSG_DONE_READ_BYTES_FROM_NAND_WROTE "\nFeito! 0x%X bytes lidos da memória NAND e 0x%X bytes gravados para %s\n"
#define MSG_DONE_SUCCESS_WROTE_BYTES "0x%X bytes escritos com sucesso de %s para a memória Flash!\n"
#define MSG_DONE_FAILED_WRITE_BYTES "Falha ao gravar 0x%X bytes de %s para a memória Flash!\n"
 
#define MSG_IMAGE_WRITTEN "Imagem gravada :D\n"
#define MSG_IMAGE_DUMPED "NAND dumpada! :D\n"
#define MSG_FAILED_TO_WRITE_IMAGE "Falha ao gravar a imagem :(\n"
#define MSG_FAILED_TO_DUMP_NAND "Falha ao dumpar a memória NAND :(\n"
 
#define MSG_OPENED_OK_ATTEMPTING_READ_FROM_FLASH "%s aberto com sucesso, tentado ler 0x%X bytes da memória Flash!...\n"
#define MSG_OPENED_OK_ATTEMPTING_READ_FROM_FLASH_READABLE "%s aberto com sucesso, tentando ler 0x%X bytes (%s) da memória Flash!...\n"
#define MSG_OPENED_OK_ATTEMPTING_WRITE_TO_FLASH "%s aberto com sucesso, tentando gravar 0x%X bytes na memória Flash!...\n"
 
#define MSG_READING_TO_MEMORY " * Transferindo a imagem para a memória...\n"
#define MSG_IS_BIGGER_THEN_FLASH "%s é maior que a memória Flash! - Operação cancelada!\n"
#define MSG_IS_SMALLER_THEN_FLASH "%s é menor que a memória Flash! - Operação cancelada!\n"
#define MSG_WRITING_TO_FLASH " * Gravando imagem para a memória Flash!...\n"
 
#define MSG_SFCX_ERROR "\r ! SFCX: "
#define MSG_BAD_BLOCK_FOUND_AT "Encontrado bloco danificado no endereço 0x%X\n"
#define MSG_ILLEGAL_LOGICAL_BLOCK "Bloco lógico ilegal no endereço 0x%X (Condição: 0x%X)\n"
#define MSG_UNKNOWN_ERROR_AT_ADDRESS "Erro desconhecido no endereço 0x%X: 0x%X. Você está encrencado.\n"
#define MSG_UNEXPECTED_SFCX_WRITE_PAGE_STATUS "Erro sfcx_write_page 0x%X - Condição inesperada\n"
 
#define MSG_BLOCK_SEEMS_BAD "\rO bloco 0x%X parace ser defeituoso, condição 0x%X\n"
#define MSG_ATTEMPTING_BLOCK_RECOVERY "Tentando recuperar o bloco...\n"
#define MSG_BLOCK_RECOVERED_SUCCESSFULLY "Bloco recuperado! (Motivo: Erro lógico no bloco...)\n"
#define MSG_BLOCK_CANNOT_BE_RECOVERED "O Bloco não pode ser recuperado! (Motivo: Bloco realmente danificado / Erro físico na memória Flash!)\n"
#define MSG_SFCX_UNSUPPORTED_TYPE_A0 "Tipo A-0 não suportado\n"
#define MSG_SFCX_UNSUPPORTED_TYPE_B0 "Tipo B-0 não suportado\n"
#define MSG_SFCX_UNSUPPORTED_TYPE "Tipo não suportado\n"
 
#define MSG_RAW_NAND_DETECTED " * Dispositivo NAND RAW detectado!\n * Alternando para o modo NAND [16/256/512MB]...\n\n"
#define MSG_MMC_NAND_DETECTED " * Dispositivo NAND MMC detectado!\n * Alternando para o modo MMC/Corona v2/v4/v6 [4GB]...\n\n"
 
#define MSG_CALCULATED_VALUE "\nValor Calculado: %08X"
#define MSG_EXPECTED_VALUE "\nValor Esperado: %08X"
#define MSG_CHECKING_CRC32 " * Verificando o valor da soma CRC32 de %s: "
#define MSG_CALCULATING_CRC32_FOR "Calculando o valor da soma CRC32 para: %s\n"
#define MSG_ATTEMPTING_TO_SAVE_CRC32_TO " * Tentando salvar o valor da soma CRC32 para %s...\n"
#define MSG_SUCCESSFULLY_SAVED_CRC32 " * Valor da soma CRC32 salvo com sucesso!\n"
 
#define MSG_LOOKING_FOR " * Procurando por %s... "
#define MSG_FOUND_CHECKING_CRC32 "Encontrado!\n * Verificando o valor da soma CRC32...\n"
#define MSG_NOT_FOUND "Não encontrado!\n"
 
#define MSG_CURRENT_DASHBOARD "Versão atual da Dashboard: %d.%d.%d.%d\n"
#define MSG_CURRENT_DASHLAUNCH "Versão atual da DashLaunch: %hu.%02hu (%hu)\n"
#define MSG_DASHLAUNCH_NOT_RUNNING "Versão atual da DashLaunch: Nenhuma em Execução\n"
#define MSG_SYSCALL_RETURN_VALUE "SysCall Return value: 0x%llX\n" // Should probably be left alone as it has no use for anyone that isn't a developer whom wish to solve problems with this tool...
#define MSG_YOUR_CPUKEY_IS "Sua CPUKey é: "
#define MSG_CPUKEY_SUCCESSFULLY_SAVED " * CPUKey salva com sucesso em: %s\n"
 
#define MSG_CHECKING_FOR_SPARE "Verificando %s por dados de reserva... "
#define MSG_BAD_MAGIC "%s Não contém os bytes mágicos esperados em uma imagem NAND de XBOX 360, operação cancelada!\n"
#define MSG_SPARE_DETECTED "Dados de reserva detectados!\n"
#define MSG_SPARE_NOT_DETECTED "Dados de reserva não detectados!\n"
 
#define MSG_YOU_HAVE_SECONDS_BEFORE_CONTINUE "\rVocê tem %d segundos para desligar seu console antes que o processo continue..."
#define MSG_TIMES_UP "Fim do tempo! Espero que você não tenha cometido um engano! ;)\n"
 
#define MSG_PRESS_START_TO_FLASH "Pressione START para gravar na memória NAND do seu console ou pressione qualquer outro botão para sair do programa!\n\n"
#define MSG_PRESS_START_TO_OVERWRITE_EXISTING_FILE " **** ATENÇÃO: O arquivo em %s já existe! ****\nPressione START se você deseja sobregravar este arquivo agora!\n"
#define MSG_PRESS_A_TO_DUMP_SYSTEM_ONLY "Pressione A para dumpar somente a partição do sistema (64MB, Recomendado!)\n"
#define MSG_PRESS_B_TO_DUMP_FULL_NAND "Pressione B para dumpar a NAND completa (256MB/512MB, Isto pode demorar um pouco...)\n"
#define MSG_PRESS_BACK_TO_ABORT_DUMP "Pressione BACK para cancelar o processo de leitura...\n"
 
#define MSG_WARNING_DO_NOT_TOUCH_CONSOLE_OR_CONTROLLER "ATENÇÃO! NÃO TOQUE EM SEU CONSOLE OU CONTROLE DURANTE O PROCESSO DE GRAVAÇÃO!!\nO console será reinicializado automagicamente quando estiver pronto!\n\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_NO_SPARE_TO_SPARE_CONSOLE "\n\nATENÇÃO! Você está prestes a gravar uma imagem que não contém os dados de reserva para um console em que eles são necessários!\nSe você sabe o que está fazendo, pressione START para continuar ou qualquer outro botão para sair!\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_SPARE_TO_NO_SPARE_CONSOLE "\n\nATENÇÃO! Você está prestes a gravar uma imagem  que contém os dados de reserva para um console em que eles não são necessários!\nSe você sabe o que está fazendo, pressione START para continuar ou qualquer outro botão para sair!\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_NO_SPARE_TO_SPARE_CONSOLE_AUTO "\n\nATENÇÃO! Você está prestes a gravar uma imagem que não contém os dados de reserva para um console em que eles são necessários!\nDesligue seu console para cancelar!"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_SPARE_TO_NO_SPARE_CONSOLE_AUTO "\n\nATENÇÃO! Você está prestes a gravar uma imagem  que contém os dados de reserva para um console em que eles não são necessários!\nDesligue seu console para cancelar!"
 
#define MSG_COMPLETED_AFTER_SECONDS "Processo concluído em %4.2f segundos\n"
#define MSG_REBOOTING_IN "O console será reinicializado em "
#define MSG_BYE "Até mais!"
#define MSG_TRY_AGAIN "Tente novamente:\n"
 
#define MSG_BB_DETECTED_SETTING_64MB " * NAND de %d MB detectada! Tamanho do dump configurado para 64MB!"
 
#define MSG_EXECUTING_COMMAND_IN_SECONDS "\rO comando será executado em %d segundos"
#define MSG_EXECUTING_COMMAND "\rComando em execução!\n"
 
#define MSG_LOOKING_FOR_CMD_FILE_FOR_AUTO_MODE " * Procurando pelo arquivo automatizado simpleflasher.cmd...\n"
#define MSG_AUTO_DUMP_FOUND " * Comando AutoDump encontrado!\n * Comando em execução!\n\n"
#define MSG_AUTO_FLASH_FOUND " * Comando AutoFlash encontrado!\n\n"
#define MSG_AUTO_SAFE_FLASH_FOUND " * Comando AutoSafeFlash encontrado!\n\n"
#define MSG_AUTO_EXIT_FOUND " * Comando AutoExit encontrado!\n\n"
#define MSG_AUTO_REBOOT_FOUND " * Comando AutoReboot encontrado!\n\n"
#define MSG_HASH_DONT_MATCH "Hash não confere ou arquivo não existe... Operaçao cancelada!\n"
#define MSG_BAD_COMMAND_FILE_RETURNING_TO_MANUAL_MODE "! ERRO: Arquivo de comandos inválido - Por favor leia o arquivo README!\nAlternando para o modo manual!\n"
#define MSG_COMMAND_FILE_NOT_FOUND_ENTERING_MANUAL_MODE "game:\\simpleflasher.cmd não encontrado!\n * Alternando para o modo manual!\n\n"
 
#define MSG_CONSOLE_INFO_LINE   "\n=========[ Informações sobre o Console ]=========\n\n"
#define MSG_CONSOLE_INFO_BOTTOM "\n=================================================\n\n"
 
#define MSG_DETECTING_NAND_TYPE " * Detectando o tipo da NAND...\n"
#define MSG_ATTEMTPING_TO_GRAB_CPUKEY " * Tentando obter a CPUKey...\n"
#define MSG_INCOMPATIBLE_DASHLAUNCH "Detectada versão incompatível da DashLaunch! Utilize o XeLL!\n"
 
#define MSG_PRESS_A_TO_FLASH_RAWFLASH "Pressione A se você deseja gravar sua NAND utilizando o Rawflash v5\n"
#define MSG_PRESS_A_TO_FLASH_RAWFLASH4G "Pressione A se você deseja gravar sua NAND utilizando o Rawflash4G v1\n"
#define MSG_PRESS_B_TO_SAFE_FLASH_RAWFLASH "Pressione B se você deseja fazer o safeflash da sua NAND utilizando o Rawflash v5 (Dumpar + Escrever)\n"
#define MSG_PRESS_B_TO_SAFE_FLASH_RAWFLASH4G "Pressione B se você deseja fazer o safeflash da sua NAND utilizando o Rawflash4G v1 (Dumpar + Escrever)\n"
#define MSG_PRESS_X_TO_DUMP_RAWFLASH "Pressione X se você deseja dumpar a sua NAND utilizando o Rawdump v1\n"
#define MSG_PRESS_X_TO_DUMP_RAWFLASH4G "Pressione X se você deseja dumpar a sua NAND utilizando o Rawdump4G v1\n"
#define MSG_PRESS_ANY_OTHER_BUTTON_TO_EXIT "Se você pressionar qualquer outro botão, este programa será finalizado...\n"
#define MSG_PRESS_ANY_BUTTON_TO_EXIT "Pressione qualquer botão para sair!\n"

#define MSG_PRESS_B_TO_OVERWRITE_EXISTING_FILE_SERIAL "Ou pressione B para salvar/sobregravar como %s_%s.bin\n"
#define MSG_ATTEMPTING_TO_GET_CONSOLE_SERIAL " * Tentando obter o Número de Série do console...\n"
#define MSG_CONSOLE_SERIAL "Número de Série do console: %s\n"
#define MSG_GAME_NOT_MOUNTED_TRYING_USB "game:\\ não está montado, verificando se um dispositivo usb está disponível...\n"
#define MSG_GAME_NOT_MOUNTED_TRYING_HDD "game:\\ não está montado, verificando se um disco rígido está disponível...\n"
#define MSG_GAME_NOT_MOUNTED "game:\\ não está montado, impossível continuar!\n"
 
#endif