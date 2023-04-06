let nome = read_line () in
let x = read_float () in
let y = read_float () in

Printf.printf "TOTAL = R$%.2f\n" (x +. (y *. 0.15));;