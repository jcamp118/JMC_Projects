
from flask import Flask, render_template
from datetime import datetime

app = Flask(__name__)

@app.route('/')
def index():
    current_time = datetime.now().strftime("%A - %B %d, %Y @ %H:%M:%S")
    return render_template("index.html", current_time=current_time)

if __name__ == "__main__":
    app.run(debug=True)

#Referenced the following for Flask information:
    #https://www.youtube.com/watch?v=Z1RJmh_OqeA