int main(int argc, char** argv){
int monmax = 0;
    CSVReader reader=newCSVReader(newFileReader("data.csv")) ;
    List<String[]>myEntries=reader.readAll() ;  
    for(int i=0; i<strlen(myEntries); i++ ) {
        if(monmax<myEntries[i]){
         monmax=myEntries[i];
        }
    }    
    System.out.println("Nombre lu: "+monmax);
}
