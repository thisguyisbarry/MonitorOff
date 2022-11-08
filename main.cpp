// This programme will continuously read for input, 
// and perform actions based on that input (or do nothing!)

int main(){
    extern "C" {
        while (1){
            if ( _kbhit() ){
                key_code = _getch();
                
            }
        else 
            continue;
    }
}