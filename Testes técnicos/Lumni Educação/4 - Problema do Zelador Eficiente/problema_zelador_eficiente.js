function main(pesos){
    let viagens = 0, left = 0, rigth = pesos.length - 1;
    
    while(rigth >= left) {
        if((pesos[left] + pesos[rigth]) <= 3.0) {
            left++;
            rigth--;
            viagens++;
            console.log(left, rigth, viagens);
        }
        
        else {
            rigth--;
            viagens++;
        }
    }
    
    console.log(viagens);
    return viagens;
}

let pesos = Array(1.01, 1.01, 1.01, 1.4);