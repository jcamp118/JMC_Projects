from flask import Flask, render_template, request
from datetime import datetime

app = Flask(__name__)

@app.route('/')
def index():
    return render_template("main.html")

@app.route('/calculate', methods=['GET'])
def calculator(number = None):
    if len(request.args)==0:
        return render_template('calculation.html')
    number = request.args['number']
    try:
        if int(number)%2==0:
            msg='an even integer.'
        elif int(number)%2!=0:
            msg='an odd integer.'
    except:
        msg='WRONGO! INTEGERS ONLY!!!'
    return render_template('calculation.html', num=number, name=msg)

if __name__ == "__main__":
    app.run(debug=True)

#Referenced the following for Flask information:
    #https://www.youtube.com/watch?v=Z1RJmh_OqeA