function main(palavra) {
    let letras = palavra.split('');
    let count = 0;
    let elementos;
    let posicao;
    
    while (letras.length) {
        // console.table(letras)
        elementos = letras.pop();
        // console.log(elementos);
        posicao = letras.indexOf(elementos);
        // console.table(posicao)
        
        if (posicao < 0) {
            count++;
        } 
        
        else {
            letras.splice(posicao, 1);
        }
        
        // console.log(count);
    }
    
    return count < 2;
}

let a = main("abbacd");
console.log(a);