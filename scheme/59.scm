;; アッカーマン関数ack(x, y)。原始再帰的ではなく、末尾再帰で書けない。
(define (ack x y)
  (cond ((= x 0) (+ y 1))                      ; ack(0, y) = y+1
	((= y 0) (ack (- x 1) 1))              ; x!=0のとき、ack(x, 0) = ack(x-1, 1)
	(else (ack (- x 1) (ack x (- y 1)))))) ; x!=0, y!=0のとき、ack(x, y) = ack(x-1, ack(x, y-1))
