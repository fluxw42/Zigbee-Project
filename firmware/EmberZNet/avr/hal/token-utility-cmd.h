// Give a name to the list of commands in this file.
// (this is the variable name assigned to the data structure that is
// generated by test-def.h and will hold all the command data)
CMDLIST(baseCommandList)


//List definitions of the commands.
// The format of a definition is:
//   CMD(<function name>,<command the user types>,<arguements>,<help string>)
// All functions listed must have the parameters (int16u param1,int16u param2)
//    but those parameters do not have to be used.
// The command listed must be all upper case.
// The arguements string can be empty, one word, or two words.  For example:
//    ""   OR   "x"   OR   "x y"
// The help string has no effect other than to be printed by the "HELP" command.
CMD(tokenMap, "TOKMAP", "", "Print the Token Memory Map")
CMD(tokenRead, "TOKREAD", "creator", "Read all data of token")
CMD(tokenWrite, "TOKWRITE", "creator", "Write all data of a token")
CMD(tokenDump, "TOKDUMP", "", "Dump the entire token data set")
CMD(loadStackAppTokens, "LOADTOKS", "", "Load stack and application token defaults")
CMD(loadMfgTokens, "LOADMFGTOKS", "", "Load manfuacturing token defaults")
CMD(loadAllTokens, "LOADALLTOKS", "", "Erases EEPROM and loads all token defaults")


CMD(rebootMe, "REBOOT", "", "Reboot (by using a watchdog reset)")

// If a function is to be access by two different commands, CMD() is used
// to define the first command, and CMD2() is used to define the second.
CMD(printHelp, "HELP", "", "Prints this help menu")
CMD2(printHelp, "?", "", "Also prints this help menu")

