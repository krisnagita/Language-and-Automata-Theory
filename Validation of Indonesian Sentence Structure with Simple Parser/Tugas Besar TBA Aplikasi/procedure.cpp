#include "header.h"

void Spasi (string S, int &i){
    while (S[i] != ' ' && i < S.length()){
        i++;
    }
}

bool cekSubjek(string S,  int &i){
 if (S[i] == ' '){
    i++;
  }
  int j = i;
  bool status = true;
  while (i < S.length() && status){
    if (S[i] == 'S' || S[i] == 's'){
        i++;
        if (S[i] == 'a'){
            i++;
            if (S[i] == 'y'){
                i++;
                if ((S[i] == 'a' && S[i+1] == NULL) || (S[i] == 'a' && S[i+1] == ' ')) {
                    i++;
                    status = true;
                    return status;
                }
            }
        }
    }
    else if (S[i] == 'A' || S[i] == 'a'){
        i++;
        if (S[i] == 'k'){
            i++;
            if ((S[i] == 'u' && S[i+1] == NULL) || (S[i] == 'u' && S[i+1] == ' ')){
                i++;
                status = true;
                return status;
            }
        }
    }
    else if (S[i] == 'D' || S[i] == 'd'){
        i++;
        if (S[i] == 'i'){
            i++;
            if ((S[i] == 'a'  && S[i+1] == NULL) || (S[i] == 'a' && S[i+1] == ' ')){
                i++;
                status = true;
                return status;
            }
        }
    }
    else if (S[i] == 'K' || S[i] == 'k'){
        i++;
        if (S[i] == 'r'){
            i++;
            if (S[i] == 'i'){
                i++;
                if (S[i] == 's'){
                    i++;
                    if (S[i] == 'n'){
                        i++;
                        if ((S[i] == 'a' && S[i+1] == NULL) || (S[i] == 'a' && S[i+1] == ' ')){
                            i++;
                            status = true;
                            return status;
                        }
                    }
                }
            }
        }
    }
    else if (S[i] == 'N' || S[i] == 'n'){
        i++;
        if (S[i] == 'a'){
            i++;
            if (S[i] == 'u'){
                i++;
                if (S[i] == 'f'){
                    i++;
                    if (S[i] == 'a'){
                        i++;
                        if ((S[i] == 'l' && S[i+1] == NULL) || (S[i] == 'l' && S[i+1] == ' ')){
                            i++;
                            status = true;
                            return status;
                        }
                    }
                }
            }
        }
    }else if(S[i] ==NULL) {
        return 0;
    }else{
        i = j;
        return false;
    }
  }
  return false;
};


bool cekPredikat(string S, int &i){
  if (S[i] == ' '){
    i++;
  }
  int j = i;
  bool status = true;
  while (i < S.length() && status ){
    if (S[i] == 'N' || S[i] == 'n'){
        i++;
        if (S[i] == 'o'){
            i++;
            if (S[i] == 'n'){
                i++;
                if (S[i] == 't'){
                    i++;
                    if (S[i] == 'o'){
                        i++;
                        if ((S[i] == 'n' && S[i+1] == NULL) || (S[i] == 'n' && S[i+1] == ' ')){
                            i++;
                            status = true;
                            return true;
                        }
                    }
                }
            }
        }
    }
    else if (S[i] == 'm' || S[i] == 'M'){
        i++;
        if ((S[i] == 'a') || (S[i] == 'i')){
            i++;
            if ((S[i] == 'k' && S[i-1] == 'a') || (S[i] == 'i' && S[i-1] == 'a') || (S[i] == 'n' && S[i-1] == 'a') || (S[i] == 'n' && S[i-1] == 'i') ){
                i++;
                if ((S[i] == 'a' && S[i-1] == 'k') || (S[i] == 'n' && S[i-1] == 'i') || (S[i] == 'd' && S[i-1] == 'n') ||  (S[i] == 'u' && S[i-1] == 'n')) {
                    i++;
                        if ((S[i-1] == 'n' && S[i-2] == 'i' && S[i] == NULL) || (S[i-1] == 'n' && S[i-2] == 'i' && S[i] == ' ')) { //main
                            status = true;
                            return status;
                        }
                    if ((S[i] == 'n' && S[i-1] == 'a') || (S[i] == 'i' && S[i-1] == 'd') || (S[i] == 'n' && S[i-1] == 'a') || (S[i] == 'm' && S[i-1] == 'u') ){
                        i++;
                        if ((S[i-1] == 'n' && S[i-2] =='a' && S[i] == NULL || (S[i-1] == 'n' && S[i-2] == 'a' && S[i] == ' '))){ //makan
                            status = true;
                            return status;
                        }
                        if ((S[i-1] == 'i' && S[i-2] =='d' && S[i] == NULL) || (S[i-1] == 'i' && S[i-2] =='d' && S[i] == ' ')){ //mandi
                            status = true;
                            return status;
                        }
                        if ((S[i-1] == 'm' && S[i-2] =='u'  && S[i] == NULL) || (S[i-1] == 'm' && S[i-2] =='u' && S[i] == ' ')){ //minum
                            status = true;
                            return status;
                        }
                    }
                }
            }
        }
    }else if(S[i] ==NULL) {
        return 0;
    }else{
        i = j;
        status = false;
        return status;
    }
  }
  i = j;
  return false;
};




bool cekObject(string S, int &i){
    if (S[i] == ' '){
        i++;
    }
    int j = i;
    bool status = true;
    while (i < S.length() && status ){
        if (S[i] == 'b' || S[i] == 'B'){
            i++;
            if (S[i] == 'o') {
                i++;
                if (S[i] == 'l'){
                    i++;
                    if((S[i] == 'a'  && S[i+1] == NULL) || (S[i] == 'a' && S[i+1] == ' ')){
                        i++;
                        status = true; //bola
                        return status;
                        }
                    }
                }
        }
        else if (S[i] == 'N' || S[i] == 'n'){
            i++;
            if (S[i] == 'a') {
                i++;
                if (S[i] == 's'){
                    i++;
                    if  ((S[i] == 'i' && S[i+1] == NULL) || (S[i] == 'u' && S[i+1] == ' ')){
                        i++;
                        status = true; //nasi
                        return status;
                    }
                }
            }
        } else if (S[i] == 'A' || S[i] == 'a'){
            i++;
            if (S[i] == 'i') {
                i++;
                if ((S[i] == 'r' && S[i+1] == NULL) || (S[i] == 'r' && S[i+1] == ' ')){
                    i++;
                    status = true; //air
                    return status;
                }
            }
        } else if (S[i] == 't' || S[i] == 'T'){
            i++;
            if ((S[i] == 'v' && S[i+1] == NULL) || (S[i] == 'v' && S[i+1] == ' ')) {
                i++;
                status = true;
                return status;
            }
        } else if (S[i] == 'S' || S[i] == 's'){
            i++;
            if (S[i] == 'u') {
                i++;
                if (S[i] == 's'){
                    i++;
                    if((S[i] == 'u' && S[i+1] == NULL) || (S[i] == 'u' && S[i+1] == ' ')){
                        i++;
                        status = true; //susu
                        return status;
                    }
                }
            }
        }
        else{
            i = j;
            status = false;
            return status;
        }
    }
    i = j;
    return false;
};

bool cekKeterangan(string S, int &i){
    if (S[i] == ' '){
    i++;
    }
    bool status = true;
    int j = i;
    while (i < S.length() && status ){
        if (S[i] == 'S' || S[i] == 's'){
            i++;
            if (S[i] == 'e') {
                i++;
                if (S[i] == 'k'){
                    i++;
                    if(S[i] == 'a'){
                        i++;
                        if (S[i] == 'r'){
                            i++;
                            if (S[i] == 'a'){
                                i++;
                                if (S[i] == 'n'){
                                    i++;
                                    if (S[i] == 'g'){
                                        i++;
                                        status = true;
                                        return true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if (S[i] == 'K' || S[i] == 'k'){
            i++;
            if (S[i] == 'e'){
                i++;
                if (S[i] == 'm'){
                    i++;
                    if (S[i] == 'a'){
                        i++;
                        if (S[i] == 'r'){
                            i++;
                            if (S[i] == 'i'){
                                i++;
                                if (S[i] == 'n'){
                                    i++;
                                    status = true;
                                    return status;
                                }
                            }
                        }
                    }
                }
            }
        } else if (S[i] == 'm' || S[i] == 'M'){
            i++;
            if (S[i] == 'a'){
                i++;
                if (S[i] == 'l'){
                    i++;
                    if (S[i] == 'a'){
                        i++;
                        if (S[i] == 'm'){
                        i++;
                            if (S[i] == ' '){
                            i++;
                                if (S[i] == 'i'){
                                i++;
                                    if (S[i] == 'n'){
                                    i++;
                                        if (S[i] == 'i'){
                                        i++;
                                        status = true;
                                        return status;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if (S[i] == 'P' || S[i] == 'p'){
            i++;
            if (S[i] == 'a'){
                i++;
                if (S[i] == 'g'){
                    i++;
                    if (S[i] == 'i'){
                        i++;
                        if (S[i] == ' '){
                            i++;
                            if (S[i] == 'i'){
                                i++;
                                if (S[i] == 'n'){
                                    i++;
                                    if (S[i] == 'i'){
                                        i++;
                                        status = true;
                                        return status;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if (S[i] == 'N' || S[i] == 'n'){
            i++;
            if (S[i] == 'a'){
                i++;
                if (S[i] == 'n'){
                    i++;
                    if (S[i] == 't'){
                        i++;
                        if (S[i] == 'i'){
                            i++;
                            status = true;
                            return status;
                        }
                    }
                }
            }
        } else{
            i = j;
            return false;
        }
    }
    i = j;
    return false;
};
