Steps for update cocoapods version.

1. git add ./
2. git commit -m {description}
3. git push
4. git tag {version}	(git tage 0.1.0)
5. git push origin {version}
6. pod trunk push --allow-warnings
	(pod trunk register {email} {author name} : this is already run at first time)
