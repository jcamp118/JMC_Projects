# Manny Campbell, Nathan Gray, Manny Lee, Philip Vishnevsky, Natalie Tepedino

from flask import Flask, render_template, request, redirect, url_for


app = Flask(__name__)

# Dictionary storing registered users
registered = {}

# Hardcoded organizations
orgs = ['Yeet Yard', 'Dork Dominion', 'NERF Nation', 'Cheese Clan', 'Geese Gaggle']


@app.route('/', methods=['GET', 'POST'])
def index():
    if request.method == 'POST':
        # Gather user input
        name = request.form.get('name')
        org = request.form.get('organization')

        # Verify that input is valid
        if not name or not org:
            error = 'Both Name and Organization are required fields.'
            return render_template('index.html', orgs=orgs, error=error)

        if org not in orgs:
            error = 'Invalid organization selected.'
            return render_template('index.html', orgs=orgs, error=error)

        # Store the information
        registered[name] = org
        return redirect(url_for('register'))  # Redirect to registered page

    return render_template('index.html', orgs=orgs)


@app.route('/register')
def register():
    return render_template('register.html', registered=registered)


if __name__ == '__main__':
    app.run(debug=True)

    #Referenced the following for styling and Flask guidance:
        #https://www.w3schools.com/html/html_table_styling.asp
        #https://dev.to/hrushikesh41/creating-navbar-using-css-28c6
        #https://www.youtube.com/watch?v=Z1RJmh_OqeA