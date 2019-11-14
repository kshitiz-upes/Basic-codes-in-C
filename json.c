
jwOpen( buffer, buflen, JW_OBJECT, JW_PRETTY );  // open root node as object
jwObj_string( "key", "value" );                  // writes "key":"value"
jwObj_int( "int", 1 );                           // writes "int":1
jwObj_array( "anArray");                         // start "anArray": [...] 
    jwArr_int( 0 );                              // add a few integers to the array
    jwArr_int( 1 );
    jwArr_int( 2 );
jwEnd();                                         // end the array

err= jwClose();
