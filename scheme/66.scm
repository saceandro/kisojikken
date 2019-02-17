(define (if-fun exp1 exp2 exp3)
  (if exp1 exp2 exp3))

;; 例えば(fact3 1)を実行すると、(if-fun (< 1 1) 1 (* 1 (if-fun (< 0 1) 1 (* 0 if-fun (< -1 1) 1 (* -1 if-fun(< -2 1) 1 (* -2 if-fun(...と呼び出しが永遠に続き、終了しないプログラムとなる。
(define (fact3 n)
  (if-fun (< n 1)
	  1
	  (* n (fact3 (- n 1)))))
