; 2値の最小値を返す関数my-min
; x < y ならばxを、そうでなければyを返す。
(define (my-min x y)
  (if (< x y) x y))

; 4値の最小値を返す関数min-of-four(上でmy-minを使用)
(define (min-of-four x y z w)
  (my-min x (my-min y (my-min z w))))

; 2値の最小値を返す関数my-min2(略記せずに書いたもの)
(define my-min2
  (lambda (x y) (if (< x y) x y)))

;4値の最小値を返す関数min-of-four2(my-min2を使用、略記せずに書いたもの)
(define min-of-four2
  (lambda (x y z w) (my-min2 (my-min2 (my-min2 x y) z) w)))
