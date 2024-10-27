import requests

# ServiceNow credentials and instance URL
instance_url = 'https://your_instance.service-now.com/api/now/table/incident/{sys_id}'
user = 'your_username'
password = 'your_password'

# Incident sys_id to be deleted
sys_id = 'your_incident_sys_id'

# Set the headers for the request
headers = {
    "Content-Type": "application/json",
    "Accept": "application/json"
}

# Delete incident
url = instance_url.format(sys_id=sys_id)
response = requests.delete(url, auth=(user, password), headers=headers)

if response.status_code == 204:
    print("Incident deleted successfully.")
else:
    print(f"Error: {response.status_code}, {response.text}")
