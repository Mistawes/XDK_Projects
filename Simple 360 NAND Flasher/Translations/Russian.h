#ifndef __RUSSIAN_TRANSLATION
#define __RUSSIAN_TRANSLATION

#define TRANSLATION_BY "Над переводом работали: RichY,MazheM,Sindyrello,Cosmaty31,Acousticks \n\n"

#define MSG_GETTING_NAND_SIZE "Получение размера NAND...\n"
#define MSG_SIZE " * Размер: 0x%X (%s)\n"

#define MSG_ERROR "\n ! ОШИБКА: "

#define MSG_ERROR_READING_BYTES "\rошибка чтения 0x%X байта по адресу 0x%X (считано: 0x%X байт)!\n"
#define MSG_ERROR_WRITING_BYTES "\rошибка записи 0x%X байта по адресу 0x%X (записано: 0x%X байт)!\n"
#define MSG_ERROR_FAILED_TO_READ_BYTES_FROM_FILE "\rОШИБКА: не удалось считать %d байт из файла\n\n"
#define MSG_ERROR_FAILED_TO_WRITE_BYTES_TO_FILE "\rОШИБКА: Не удалось записать %d байт в файл\n\n"

#define MSG_ERROR_INVALID_FILE_SIZE "ошибка: %s - размер %d не является корректным для образа!\n"
#define MSG_ERROR_SIZE_NOT_SUPPORTED "ошибка: размер %d не поддерживается!\n"

#define MSG_FILE_NOT_FOUND "Файл %s не найден\n"

#define MSG_UNABLE_TO_MOUNT_FLASH "Невозможно подключиться к памяти"
#define MSG_UNABLE_TO_OPEN_FLASH_FOR_READING "Не удалось открыть память: для чтения\n"
#define MSG_UNABLE_TO_OPEN_FLASH_FOR_WRITING "Не удалось открыть память: для записи\n"
#define MSG_UNABLE_TO_OPEN_FOR_WRITING "Невозможно открыть %s для записи\n"
#define MSG_UNABLE_TO_OPEN_FOR_READING "Невозможно открыть %s для чтения, ошибка: 0x%X\n"
#define MSG_UNABLE_TO_GET_SIZE_OF_FLASH "Невозможно получить размер памяти!\n"
#define MSG_UNABLE_TO_WRITE_BYTES_TO_FLASH "Невозможно записать 0x%X байт в память, ОШИБКА: 0x%X Адрес: 0x%X"
#define MSG_UNABLE_TO_READ_FROM "Невозможно считать 0x%X байт из %s (считано: 0x%X байт)\n"
#define MSG_UNABLE_TO_ALLOCATE_BUFFER_FOR "Невозможно выделить 0x%X байт в буфере для %s\n"
#define MSG_UNABLE_TO_ALLOCATE_BUFFER "Невозможно выделить 0x%X байт для буфера!\n"
#define MSG_UNABLE_TO_READ_0X630_BYTES_FROM "Невозможно прочитать 0x630 байт из %s!\n"

#define MSG_PROCESSING_BLOCK "\rобработка блока 0x%X из 0x%X (%3.2f %%)"
#define MSG_PROCESSED_OF_BYTES "\rОбработано 0x%X из 0x%X байт (%3.2f %%)"
#define MSG_PROCESSING_START "\rобработка блока"
#define MSG_PROCESSED_START "\rОбработано"

#define MSG_DONE_SUCCESS_DUMPED_BYTES "\nЗавершено! успешно считано 0x%X байт в %s\n"
#define MSG_DONE_READ_BYTES_FROM_NAND_WROTE "\nЗавершено! считано 0x%X байт из NAND, записано 0x%X байт в %s\n"
#define MSG_DONE_SUCCESS_WROTE_BYTES "Успешно записано 0x%X байт в память из %s\n"
#define MSG_DONE_FAILED_WRITE_BYTES "Не удалось записать 0x%X байт в память из %s\n"

#define MSG_IMAGE_WRITTEN "образ записан :D\n"
#define MSG_IMAGE_DUMPED "NAND считан и сохранен! :D\n"
#define MSG_FAILED_TO_WRITE_IMAGE "не удалось записать образ :(\n"
#define MSG_FAILED_TO_DUMP_NAND "не удалось считать NAND :(\n"

#define MSG_OPENED_OK_ATTEMPTING_READ_FROM_FLASH "%s открыт успешно, пытаемся считать 0x%X байт из памяти...\n"
#define MSG_OPENED_OK_ATTEMPTING_READ_FROM_FLASH_READABLE "%s открыт успешно, пытаемся считать 0x%X байт (%s) из памяти...\n"
#define MSG_OPENED_OK_ATTEMPTING_WRITE_TO_FLASH "%s открыт успешно, пытаемся записать 0x%X байт в память...\n"

#define MSG_READING_TO_MEMORY " * Чтение из образа в память...\n"
#define MSG_IS_BIGGER_THEN_FLASH "%s больше чем память! Прекращаем!\n"
#define MSG_IS_SMALLER_THEN_FLASH "%s меньше чем память! Прекращаем!\n"
#define MSG_WRITING_TO_FLASH " * Запись образа в память...\n"

#define MSG_SFCX_ERROR "\r ! SFCX: "
#define MSG_BAD_BLOCK_FOUND_AT "Bad block найден в 0x%X\n"
#define MSG_ILLEGAL_LOGICAL_BLOCK "Недопустимый логический блок в 0x%X (статус: 0x%X)\n"
#define MSG_UNKNOWN_ERROR_AT_ADDRESS "Неизвестная ошибка по адресу 0x%X: 0x%X. Советуем побеспокоиться.\n"
#define MSG_UNEXPECTED_SFCX_WRITE_PAGE_STATUS "Неожиданный статус записи страницы sfcx 0x%X\n"

#define MSG_BLOCK_SEEMS_BAD "\rблок 0x%X похож на bad block, статус 0x%X\n"
#define MSG_ATTEMPTING_BLOCK_RECOVERY "Пытаемся восстановить  блок...\n"
#define MSG_BLOCK_RECOVERED_SUCCESSFULLY "Блок восстановлен! (Это не был bad block...)\n"
#define MSG_BLOCK_CANNOT_BE_RECOVERED "Блок не может быть восстановлен! (Это реальный bad block)\n"
#define MSG_SFCX_UNSUPPORTED_TYPE_A0 "Неподдерживаемый тип A-0\n"
#define MSG_SFCX_UNSUPPORTED_TYPE_B0 "Неподдерживаемый тип B-0\n"
#define MSG_SFCX_UNSUPPORTED_TYPE "Неподдерживаемый тип\n"

#define MSG_RAW_NAND_DETECTED " * Обнаружено устройство RAW NAND!\n * Переход в режим NAND...\n\n"
#define MSG_MMC_NAND_DETECTED " * Обнаружено устройство MMC NAND!\n * Переход в режим MMC/Corona v2/v4 [4GB] Mode...\n\n"

#define MSG_CALCULATED_VALUE "\nПересчитанное значение: %08X"
#define MSG_EXPECTED_VALUE "\nНужное значение:   %08X"
#define MSG_CHECKING_CRC32 " * Проверка %s Crc32: "
#define MSG_CALCULATING_CRC32_FOR "Расчет CRC32 для: %s\n"
#define MSG_ATTEMPTING_TO_SAVE_CRC32_TO " * Попытка сохранить значение CRC32 для %s...\n"
#define MSG_SUCCESSFULLY_SAVED_CRC32 " * Значение CRC32 успешно сохранено!\n"

#define MSG_LOOKING_FOR " * Поиск в %s... "
#define MSG_FOUND_CHECKING_CRC32 "Найдено!\n * Проверка CRC32...\n"
#define MSG_NOT_FOUND "Не найдено\n"

#define MSG_CURRENT_DASHBOARD "Текущий Dashboard: %d.%d.%d.%d\n"
#define MSG_CURRENT_DASHLAUNCH "Текущий  DashLaunch: %hu.%02hu (%hu)\n"
#define MSG_DASHLAUNCH_NOT_RUNNING "Текущая версия DashLaunch : Не работает\n"
#define MSG_SYSCALL_RETURN_VALUE "SysCall вернул значение: 0x%llX\n" // Should probably be left alone as it has no use for anyone that isn't a developer whom wish to solve problems with this tool...
#define MSG_YOUR_CPUKEY_IS "Ваш CPUKey : "
#define MSG_CPUKEY_SUCCESSFULLY_SAVED " * CPUKey успешно сохранен в: %s\n"

#define MSG_CHECKING_FOR_SPARE "Проверка %s на наличие разметки в образе... "
#define MSG_BAD_MAGIC "%s Не содержит \"magic bytes\" ожидаемых в образе NAND Xbox 360, прекращаем работу!\n"
#define MSG_SPARE_DETECTED "Разметка в образе обнаружена!\n"
#define MSG_SPARE_NOT_DETECTED "Разметка в образе не обнаружена!\n"

#define MSG_YOU_HAVE_SECONDS_BEFORE_CONTINUE "\rУ вас есть %d что бы выключить консоль и отменить запись..."
#define MSG_TIMES_UP "Время вышло! Надеемся, что вы не допустили ошибок! ;)\n"

#define MSG_PRESS_START_TO_FLASH "Нажмите кнопку START для записи NAND или любую другую для выхода!\n\n"
#define MSG_PRESS_START_TO_OVERWRITE_EXISTING_FILE " **** ВНИМАНИЕ: %s уже существует! ****\nНажмите START, если хотите перезаписать файл!"
#define MSG_PRESS_A_TO_DUMP_SYSTEM_ONLY "Нажмите A для чтения только Системного раздела (64MB, Рекомендуется!)\n"
#define MSG_PRESS_B_TO_DUMP_FULL_NAND "Нажмите B для чтения всей памяти (256MB/512MB, тут придется подождать...)\n"
#define MSG_PRESS_BACK_TO_ABORT_DUMP "Нажмите кнопку BACK чтобы прервать считывание...\n"

#define MSG_WARNING_DO_NOT_TOUCH_CONSOLE_OR_CONTROLLER "ВНИМАНИЕ! НЕ ТРОГАЙТЕ КОНСОЛЬ ИЛИ ДЖОЙСТИК, ПОКА ИДЕТ ЗАПИСЬ!!\nКонсоль выключится после завершения!\n\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_NO_SPARE_TO_SPARE_CONSOLE "\n\nВНИМАНИЕ! Вы собираетесь записать образ, не содержащий разметки на консоль, где она необходима!\nЕсли вы уверены в том, что делаете, нажмите кнопку START для продолжения или любую другую для выхода!\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_SPARE_TO_NO_SPARE_CONSOLE "\n\nВНИМАНИЕ! Вы собираетесь записать образ, содержащий разметку на консоль, которая этого не требует!\nЕсли вы уверены в том, что делаете, нажмите кнопку START для продолжения или любую другую для выхода!\n"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_NO_SPARE_TO_SPARE_CONSOLE_AUTO "\n\nВНИМАНИЕ! Вы собираетесь записать образ, не содержащий разметки на консоль, где она необходима!\nВыключите консоль для отмены!"
#define MSG_WARNING_YOU_ARE_ABOUT_TO_FLASH_SPARE_TO_NO_SPARE_CONSOLE_AUTO "\n\nВНИМАНИЕ! Вы собираетесь записать образ, содержащий разметку на консоль, которая этого не требует!\nВыключите консоль для отмены!"

#define MSG_COMPLETED_AFTER_SECONDS "Выполнено за %4.2f секнуды\n"
#define MSG_REBOOTING_IN "Перезагрузка через "
#define MSG_BYE "Всего доброго!"
#define MSG_TRY_AGAIN "Повторите попытку:\n"

#define MSG_BB_DETECTED_SETTING_64MB " * %d MB NAND Обнаружен! Настройка размера дампа 64MB!"

#define MSG_EXECUTING_COMMAND_IN_SECONDS "\rВыполнение команды через %d секунд"
#define MSG_EXECUTING_COMMAND "\rВыполнение команды!\n"

#define MSG_LOOKING_FOR_CMD_FILE_FOR_AUTO_MODE " * Поиск в simpleflasher.cmd автоматических функций...\n"
#define MSG_AUTO_DUMP_FOUND " * AutoDump команда найдена!\n * Выполнение команды!\n\n"
#define MSG_AUTO_FLASH_FOUND " * AutoFlash команда найдена!\n\n"
#define MSG_AUTO_SAFE_FLASH_FOUND " * AutoSafeFlash команда найдена!\n\n"
#define MSG_AUTO_EXIT_FOUND " * AutoExit команда найдена!\n\n"
#define MSG_AUTO_REBOOT_FOUND " * AutoReboot команда найдена!\n\n"
#define MSG_HASH_DONT_MATCH "Хэш не совпадает, или файл не существует ... Отмена!\n"
#define MSG_BAD_COMMAND_FILE_RETURNING_TO_MANUAL_MODE "! Ошибка: Неправильный файл с авто-командами, читайте readme!\nПереход в ручной режим!\n"
#define MSG_COMMAND_FILE_NOT_FOUND_ENTERING_MANUAL_MODE "game:\\simpleflasher.cmd не найден!\n * Переход в ручной режим!\n\n"

#define MSG_CONSOLE_INFO_LINE   "\n============= Информация о консоли: =============\n\n"
#define MSG_CONSOLE_INFO_BOTTOM "\n================================================\n\n"

#define MSG_DETECTING_NAND_TYPE " * Определение типа NAND...\n"
#define MSG_ATTEMTPING_TO_GRAB_CPUKEY " * Пытаемся считать ваш CPUKey...\n"
#define MSG_INCOMPATIBLE_DASHLAUNCH "Обнаружена несовместимая версия Dashlaunch! Используйте XeLL для получения CPUkey!\n"

#define MSG_PRESS_A_TO_FLASH_RAWFLASH "Нажмитие A, если вы хотите записать nand с помощью Rawflash v5\n"
#define MSG_PRESS_A_TO_FLASH_RAWFLASH4G "Нажмите A, если вы хотите записать nand c помощью Rawflash4G v1\n"
#define MSG_PRESS_B_TO_SAFE_FLASH_RAWFLASH "Нажмите B, если вы хотите безопасно записать nand с помощью Rawflash v5 (Чтение + Запись)\n"
#define MSG_PRESS_B_TO_SAFE_FLASH_RAWFLASH4G "Нажмите B, если вы хотите безопасно записать nand с помощью Rawflash4G v1 (Чтение + Запись)\n"
#define MSG_PRESS_X_TO_DUMP_RAWFLASH "Нажмите X, если вы хотите снять дамп вашего Nand c помощью Rawdump v1\n"
#define MSG_PRESS_X_TO_DUMP_RAWFLASH4G "Нажмите X, если вы хотите снять дамп вашего Nand c помощью Rawdump4G v1\n"
#define MSG_PRESS_ANY_OTHER_BUTTON_TO_EXIT "Если нажмете что-то другое, приложение закроется...\n"
#define MSG_PRESS_ANY_BUTTON_TO_EXIT "Нажмите любую кнопку для выхода!\n"

#endif