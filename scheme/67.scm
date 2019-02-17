(define (if-fun exp1 exp2 exp3)
  '(if exp1 exp2 exp3))

(define (fact4 n)
  (eval (if-fun (< n 1) 1 (* n (fact4 (- n 1)))) (interaction-environment)))

(define (fact4-2 n)
  (