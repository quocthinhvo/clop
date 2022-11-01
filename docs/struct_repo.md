# INTRO
This documents use for developer, publisher.

Convention of struct repo.

# BODY STRUCT
## Some basic FAQ
### What is struct repository?

Struct repo (SR) is convention to submit and public your repository. SR is the first document you need to read.

As you know, ``CLOP`` is free packages management - anyone can share their pack as long as them focus to document and convention.

### What is repository?

Same with Git, repository (repo) know as a central place in which an aggregation of data is kept and maintained in an organized way, usually in computer storage. 

In ``CLOP``, repo know as a container save all of files in project/packages you want to share.

### Why we need convention?

Convention help ``CLOP`` system get true infomation, data packages. Some case convention can improve ``clarity`` of repository.

If you share packages/repo with wrong SR, ``CLOP`` can't get infomation and never download or run install.

### Who is publisher?

Because CLOP haven't backend with publisher account, so we use GitHub and GitHub API. 

As a GitHub account, such as account @username_publisher. In this case ``@username_publisher`` is know as publisher account.

Who owner this account can create new repository (via GitHub) and follow true SR. After that, this GitHub repository become to CLOP repo and CLOP system can connect/get/download/install for sure. Maybe in future, we (developer CLOP) will create template for GitHub user to quick create repository.

## Struct

### Basic struct tree
***Repository struct***

```
├── src
│   ├── code
│   │   ├── main.xyz
│   ├── resource
├── releases
│   ├── 0.1.1.zip
│   ├── lasted.zip
├── info.txt
├── setup.bat (.sh)
└── README.md
```

***Release struct***

File name: ```clop_xyz.zip```
Another file or information follow to GitHub rule.

### Explain

In struct repo, there are two place.

- Repository default: where save code.

- Release space: ``/repos/{owner}/{repo}/releases/latest``

In repository default there are some struct: 

``src`` is folder for code, source project.

``release`` is folder for custom releases.

``info.txt`` is impotant file with all info of packages will show.

``README.md`` is file for GitHub.

And in release space publisher just need follow GitHub rule.

### Exec

Use GitHub API. Here is example.

Method: 
```/repos/{owner}/{repo}/releases/latest```

Command query via cURL:
```
curl \
  -H "Accept: application/vnd.github+json" \
  -H "Authorization: Bearer <YOUR-TOKEN>" \
  https://api.github.com/repos/OWNER/REPO/releases/latest
```

Response:

```
{
  "url": "https://api.github.com/repos/octocat/Hello-World/releases/1",
  "html_url": "https://github.com/octocat/Hello-World/releases/v1.0.0",
  "assets_url": "https://api.github.com/repos/octocat/Hello-World/releases/1/assets",
  "upload_url": "https://uploads.github.com/repos/octocat/Hello-World/releases/1/assets{?name,label}",
  "tarball_url": "https://api.github.com/repos/octocat/Hello-World/tarball/v1.0.0",
  "zipball_url": "https://api.github.com/repos/octocat/Hello-World/zipball/v1.0.0",
  "discussion_url": "https://github.com/octocat/Hello-World/discussions/90",
  "id": 1,
  "node_id": "MDc6UmVsZWFzZTE=",
  "tag_name": "v1.0.0",
  "target_commitish": "master",
  "name": "v1.0.0",
  "body": "Description of the release",
  "draft": false,
  "prerelease": false,
  "created_at": "2013-02-27T19:35:32Z",
  "published_at": "2013-02-27T19:35:32Z",
  "author": {
    "login": "octocat",
    "id": 1,
    "node_id": "MDQ6VXNlcjE=",
    "avatar_url": "https://github.com/images/error/octocat_happy.gif",
    "gravatar_id": "",
    "url": "https://api.github.com/users/octocat",
    "html_url": "https://github.com/octocat",
    "followers_url": "https://api.github.com/users/octocat/followers",
    "following_url": "https://api.github.com/users/octocat/following{/other_user}",
    "gists_url": "https://api.github.com/users/octocat/gists{/gist_id}",
    "starred_url": "https://api.github.com/users/octocat/starred{/owner}{/repo}",
    "subscriptions_url": "https://api.github.com/users/octocat/subscriptions",
    "organizations_url": "https://api.github.com/users/octocat/orgs",
    "repos_url": "https://api.github.com/users/octocat/repos",
    "events_url": "https://api.github.com/users/octocat/events{/privacy}",
    "received_events_url": "https://api.github.com/users/octocat/received_events",
    "type": "User",
    "site_admin": false
  },
  "assets": [
    {
      "url": "https://api.github.com/repos/octocat/Hello-World/releases/assets/1",
      "browser_download_url": "https://github.com/octocat/Hello-World/releases/download/v1.0.0/example.zip",
      "id": 1,
      "node_id": "MDEyOlJlbGVhc2VBc3NldDE=",
      "name": "example.zip",
      "label": "short description",
      "state": "uploaded",
      "content_type": "application/zip",
      "size": 1024,
      "download_count": 42,
      "created_at": "2013-02-27T19:35:32Z",
      "updated_at": "2013-02-27T19:35:32Z",
      "uploader": {
        "login": "octocat",
        "id": 1,
        "node_id": "MDQ6VXNlcjE=",
        "avatar_url": "https://github.com/images/error/octocat_happy.gif",
        "gravatar_id": "",
        "url": "https://api.github.com/users/octocat",
        "html_url": "https://github.com/octocat",
        "followers_url": "https://api.github.com/users/octocat/followers",
        "following_url": "https://api.github.com/users/octocat/following{/other_user}",
        "gists_url": "https://api.github.com/users/octocat/gists{/gist_id}",
        "starred_url": "https://api.github.com/users/octocat/starred{/owner}{/repo}",
        "subscriptions_url": "https://api.github.com/users/octocat/subscriptions",
        "organizations_url": "https://api.github.com/users/octocat/orgs",
        "repos_url": "https://api.github.com/users/octocat/repos",
        "events_url": "https://api.github.com/users/octocat/events{/privacy}",
        "received_events_url": "https://api.github.com/users/octocat/received_events",
        "type": "User",
        "site_admin": false
      }
    }
  ]
}
```

In this response, developer can get infomation to interact with repository.

For more infomation about GitHub API releases document please read [here](https://docs.github.com/en/rest/releases/releases).