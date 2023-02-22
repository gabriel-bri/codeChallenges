function main(valores, alvo) {
    for(let i = 0; i < valores.length; i++) {
        for(let j = i + 1; j < valores.length; j++) {
            if(valores[i] + valores[j] == alvo) {
                console.log([i, j]);
                return [i, j];
            }
        }
    }
    
}

function main2(valores, alvo) {
    let map = {};
    
    for(let i = 0; i < valores.length; i++) {
        let valor = valores[i];
        let complemento = alvo - valor;
        
        if(map[complemento] !== undefined) {
            console.log([map[complemento], i]);
            return [map[complemento], i];
        }
        
        else {
            map[valor] = i;
        }
    }
    
}
let a = main([3,2,4], 6);

let b = main2([3,2,4], 6);