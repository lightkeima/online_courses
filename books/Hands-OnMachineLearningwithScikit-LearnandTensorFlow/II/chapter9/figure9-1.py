import tensorflow as tf

x = tf.Variable(3, name="x")
y = tf.Variable(4, name="y")
f = x*x*y + y + 2

#

#sess = tf.Session()
#sess.run(x.initializer)
#sess.run(y.initializer)
#result = sess.run(f)
#print(result)
#sess.close()

# OR

#with tf.Session() as sess:
#    x.initializer.run()
#    y.initializer.run()
#    result = f.eval()
#print(result)

# OR

init = tf.global_variables_initializer()

with tf.Session() as sess:
    init.run()
    result = f.eval()
print(result)
